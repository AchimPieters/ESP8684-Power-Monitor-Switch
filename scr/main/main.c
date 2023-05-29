/*
   Copyright 2023 Achim Pieters | StudioPieters®

   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in all
   copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
   WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
   CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

   Build upon: ESP-HomeKit - MIT License - Copyright (c) 2017 Maxim Kulkin
 */

#include <stdio.h>
#include <espressif/esp_wifi.h>
#include <espressif/esp_sta.h>
#include <espressif/esp_common.h>
#include <esp/uart.h>
#include <esp8266.h>
#include <FreeRTOS.h>
#include <task.h>
#include <esplibs/libmain.h>
#include <queue.h>

#include <homekit/homekit.h>
#include <homekit/characteristics.h>
#include <wifi_config.h>

#include "characteristic_types.h"
#include "software_versioning.h"
#include <button.h> // Only for onboard button


// BL0942_TX -> TX1  GPIO1
// BL0942_RX -> RX1  GPIO3


#define LED_GPIO      13   // ONBOARD LED (verified)
#define BUTTON_GPIO   17    // RESET BUTTON
#define RELAY_GPIO    14   // RELAY (verified)
#define SWITCH_GPIO   12   // WALL SWITCH (verified)


void switch_on_callback(homekit_characteristic_t *_ch, homekit_value_t on, void *context);


bool led_on = false;

void led_write(bool on) {
        gpio_write(LED_GPIO, on ? 0 : 1);
}

void relay_write(bool on) {
        gpio_write(RELAY_GPIO, on ? 1 : 0);
}

homekit_characteristic_t switch_on = HOMEKIT_CHARACTERISTIC_(ON, false, .callback=HOMEKIT_CHARACTERISTIC_CALLBACK(switch_on_callback));

void wall_switch_callback(uint8_t gpio) {

        if (gpio == SWITCH_GPIO) {
                int state = 0;
                state = gpio_read(SWITCH_GPIO);
                switch_on.value = HOMEKIT_BOOL(state);
                homekit_characteristic_notify(&switch_on, HOMEKIT_BOOL(state));
                if (state == 1) {
                        printf("Wall Switch on %d\n", gpio);
                        relay_write(switch_on.value.bool_value);
                } else {
                        printf("Wall Switch off %d\n", gpio);
                        relay_write(switch_on.value.bool_value);
                }
        }
}

void gpio_init() {
        gpio_enable(LED_GPIO, GPIO_OUTPUT);
        led_write(led_on);
        gpio_enable(RELAY_GPIO, GPIO_OUTPUT);
        relay_write(switch_on.value.bool_value);

        gpio_enable(SWITCH_GPIO, GPIO_INPUT);
        gpio_set_interrupt(SWITCH_GPIO, GPIO_INTTYPE_EDGE_ANY, wall_switch_callback);

        gpio_enable(BUTTON_GPIO, GPIO_INPUT);
}



void switch_identify_task(void *_args) {
        for (int i=0; i<3; i++) {
                for (int j=0; j<2; j++) {
                        led_write(true);
                        vTaskDelay(100 / portTICK_PERIOD_MS);
                        led_write(false);
                        vTaskDelay(100 / portTICK_PERIOD_MS);
                }
                vTaskDelay(250 / portTICK_PERIOD_MS);
        }
        led_write(led_on);
        vTaskDelete(NULL);
}

void identify(homekit_value_t _value) {
        printf("Switch identify\n");
        xTaskCreate(switch_identify_task, "Switch identify", 128, NULL, 2, NULL);
}

void reset_configuration_task() {
//Flash the LED first before we start the reset
        for (int i=0; i<3; i++) {
                led_write(true);
                vTaskDelay(100 / portTICK_PERIOD_MS);
                led_write(false);
                vTaskDelay(100 / portTICK_PERIOD_MS);
        }
        printf("Resetting Wifi Config\n");
        wifi_config_reset();
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        printf("Resetting HomeKit Config\n");
        homekit_server_reset();
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        printf("Restarting\n");
        sdk_system_restart();
        vTaskDelete(NULL);
}

void reset_configuration() {
        printf("Resetting switch configuration\n");
        xTaskCreate(reset_configuration_task, "Reset switch", 256, NULL, 2, NULL);
}

void button_callback(button_event_t event, void* context) {
        switch (event) {
        case button_event_single_press:
                printf("single press\n");
                for (int i=0; i<3; i++) {
                        led_write(true);
                        vTaskDelay(500 / portTICK_PERIOD_MS);
                        led_write(false);
                        vTaskDelay(200 / portTICK_PERIOD_MS);
                }
                break;
        case button_event_double_press:
                printf("double press\n");
                break;
        case button_event_tripple_press:
                printf("tripple press\n");
                break;
        case button_event_long_press:
                reset_configuration();
                printf("long press\n");
                break;
        }
}

void switch_on_callback(homekit_characteristic_t *_ch, homekit_value_t on, void *context) {
        relay_write(switch_on.value.bool_value);
}



#define DEVICE_NAME "Switch with power monitoring"
#define DEVICE_MANUFACTURER "StudioPieters®"
// See Naming convention.md
#define DEVICE_SERIAL "NLDA4SQN1466"
// See Naming convention.md
#define DEVICE_MODEL "SD466NL/A"
// Will get his version numer trough software_versioning
#define FW_VERSION "0.0.0"

homekit_characteristic_t ota_trigger  = API_OTA_TRIGGER;
homekit_characteristic_t name = HOMEKIT_CHARACTERISTIC_(NAME,DEVICE_NAME);
homekit_characteristic_t manufacturer = HOMEKIT_CHARACTERISTIC_(MANUFACTURER,DEVICE_MANUFACTURER);
homekit_characteristic_t serial = HOMEKIT_CHARACTERISTIC_(SERIAL_NUMBER,DEVICE_SERIAL);
homekit_characteristic_t model= HOMEKIT_CHARACTERISTIC_(MODEL,DEVICE_MODEL);
homekit_characteristic_t revision = HOMEKIT_CHARACTERISTIC_(FIRMWARE_REVISION,FW_VERSION);

homekit_accessory_t *accessories[] = {
        HOMEKIT_ACCESSORY(.id=1, .category=homekit_accessory_category_switch, .services=(homekit_service_t*[]){
                HOMEKIT_SERVICE(ACCESSORY_INFORMATION, .characteristics=(homekit_characteristic_t*[]){
                        &name,
                        &manufacturer,
                        &serial,
                        &model,
                        &revision,
                        HOMEKIT_CHARACTERISTIC(IDENTIFY, identify),
                        NULL
                }),
                HOMEKIT_SERVICE(SWITCH, .primary=true, .characteristics=(homekit_characteristic_t*[]){
                        HOMEKIT_CHARACTERISTIC(NAME, "Switch"),
                        &switch_on,
                        &ota_trigger,
                        NULL
                }),
                NULL
        }),
        NULL
};

// tools/gen_qrcode 8 227-57-577 B7ES qrcode.png
homekit_server_config_t config = {
        .accessories = accessories,
        .password = "227-57-577",
        .setupId="B7ES",
};

void create_accessory_name() {
        int serialLength = snprintf(NULL, 0, "%d", sdk_system_get_chip_id());
        char *serialNumberValue = malloc(serialLength + 1);
        snprintf(serialNumberValue, serialLength + 1, "%d", sdk_system_get_chip_id());
        int name_len = snprintf(NULL, 0, "%s-%s", DEVICE_NAME, serialNumberValue);
        if (name_len > 63) { name_len = 63; }
        char *name_value = malloc(name_len + 1);
        snprintf(name_value, name_len + 1, "%s-%s", DEVICE_NAME, serialNumberValue);
        name.value = HOMEKIT_STRING(name_value);
}

void on_wifi_ready() {
}

void user_init(void) {
        uart_set_baud(0, 115200);
        create_accessory_name();
        gpio_init();
        homekit_server_init(&config);

        // Get Github version number
        int c_hash=ota_read_sysparam(&revision.value.string_value);
        config.accessories[0]->config_number=c_hash;

        // Button Settings
        button_config_t config = BUTTON_CONFIG(
                button_active_low,
                .long_press_time = 4000,
                .max_repeat_presses = 3,
                );

        int r = button_create(BUTTON_GPIO, config, button_callback, NULL);
        if (r) {
                printf("Failed to initialize a button\n");
        }

}
