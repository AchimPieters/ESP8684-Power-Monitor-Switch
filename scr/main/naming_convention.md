Serial Number

The three symbols show the manufacturing location of your device, secondly the two digits after that tell us the year and the week of manufacture, so if you’re curious as when your ESP HomeKit Accessory is made, this is the answer. The next three, on the other hand, are unique identifiers, which are common in any serialnumber, while the last four digits represent the model number of your product.

+-------------------------------+---------------------+----------------------+--------------------+--------------+
| Manufacturing Location (ISO3) | Year of manufacture | Week of manufacture  | Unique Indentifier | Model Number |
+-------------------------------+---------------------+----------------------+--------------------+--------------+
|           LLL                 |           Y         |           WW         |         SSS        |     CCPP     |
+-------------------------------+---------------------+----------------------+--------------------+--------------+

Example: NLD A 04 WCB 1066 - HOMEKIT_CHARACTERISTIC_(SERIAL_NUMBER, "NLDA04WBC1066");

Manufacturing Location - LLL
The first three characters of your serial number are simply the abbreviation of the country your device is made. They are location codes,that can determine the location where your ESP HomeKit Accessory product was "created". likewise, it refers to the developper country that created your ESP HomeKit Accessory. Hence, it goes as follows:

+------------------------------------------------------+----------------------------------------------------------+------+------+
|                      Short name                      |                      Official name                       | ISO3 | ISO2 |
+------------------------------------------------------+----------------------------------------------------------+------+------+
| Afghanistan                                          | the Islamic Republic of Afghanistan                      | AFG  | AF   |
| Albania                                              | the Republic of Albania                                  | ALB  | AL   |
| Algeria                                              | the People's Democratic Republic of Algeria              | DZA  | DZ   |
| Andorra                                              | the Principality of Andorra                              | AND  | AD   |
| Angola                                               | the Republic of Angola                                   | AGO  | AO   |
| Antigua and Barbuda                                  | Antigua and Barbuda                                      | ATG  | AG   |
| Argentina                                            | the Argentine Republic                                   | ARG  | AR   |
| Armenia                                              | the Republic of Armenia                                  | ARM  | AM   |
| Australia                                            | Australia                                                | AUS  | AU   |
| Austria                                              | the Republic of Austria                                  | AUT  | AT   |
| Azerbaijan                                           | the Republic of Azerbaijan                               | AZE  | AZ   |
| Bahamas                                              | the Commonwealth of the Bahamas                          | BHS  | BS   |
| Bahrain                                              | the Kingdom of Bahrain                                   | BHR  | BH   |
| Bangladesh                                           | the People's Republic of Bangladesh                      | BGD  | BD   |
| Barbados                                             | Barbados                                                 | BRB  | BB   |
| Belarus                                              | the Republic of Belarus                                  | BLR  | BY   |
| Belgium                                              | the Kingdom of Belgium                                   | BEL  | BE   |
| Belize                                               | Belize                                                   | BLZ  | BZ   |
| Benin                                                | the Republic of Benin                                    | BEN  | BJ   |
| Bhutan                                               | the Kingdom of Bhutan                                    | BTN  | BT   |
| Bolivia (Plurinational State of)                     | the Plurinational State of Bolivia                       | BOL  | BO   |
| Bosnia and Herzegovina                               | Bosnia and Herzegovina                                   | BIH  | BA   |
| Botswana                                             | the Republic of Botswana                                 | BWA  | BW   |
| Brazil                                               | the Federative Republic of Brazil                        | BRA  | BR   |
| Brunei Darussalam                                    | Brunei Darussalam                                        | BRN  | BN   |
| Bulgaria                                             | the Republic of Bulgaria                                 | BGR  | BG   |
| Burkina Faso                                         | Burkina Faso                                             | BFA  | BF   |
| Burundi                                              | the Republic of Burundi                                  | BDI  | BI   |
| Cabo Verde                                           | the Republic of Cabo Verde                               | CPV  | CV   |
| Cambodia                                             | the Kingdom of Cambodia                                  | KHM  | KH   |
| Cameroon                                             | the Republic of Cameroon                                 | CMR  | CM   |
| Canada                                               | Canada                                                   | CAN  | CA   |
| Central African Republic                             | the Central African Republic                             | CAF  | CF   |
| Chad                                                 | the Republic of Chad                                     | TCD  | TD   |
| Chile                                                | the Republic of Chile                                    | CHL  | CL   |
| China                                                | the People's Republic of China                           | CHN  | CN   |
| Colombia                                             | the Republic of Colombia                                 | COL  | CO   |
| Comoros                                              | the Union of the Comoros                                 | COM  | KM   |
| Congo                                                | the Republic of the Congo                                | COG  | CG   |
| Cook Islands                                         | the Cook Islands                                         | COK  | CK   |
| Costa Rica                                           | the Republic of Costa Rica                               | CRI  | CR   |
| Croatia                                              | the Republic of Croatia                                  | HRV  | HR   |
| Cuba                                                 | the Republic of Cuba                                     | CUB  | CU   |
| Cyprus                                               | the Republic of Cyprus                                   | CYP  | CY   |
| Czechia                                              | the Czech Republic                                       | CZE  | CZ   |
| Côte d'Ivoire                                        | the Republic of Côte d'Ivoire                            | CIV  | CI   |
| Democratic People's Republic of Korea                | the Democratic People's Republic of Korea                | PRK  | KP   |
| Democratic Republic of the Congo                     | the Democratic Republic of the Congo                     | COD  | CD   |
| Denmark                                              | the Kingdom of Denmark                                   | DNK  | DK   |
| Djibouti                                             | the Republic of Djibouti                                 | DJI  | DJ   |
| Dominica                                             | the Commonwealth of Dominica                             | DMA  | DM   |
| Dominican Republic                                   | the Dominican Republic                                   | DOM  | DO   |
| Ecuador                                              | the Republic of Ecuador                                  | ECU  | EC   |
| Egypt                                                | the Arab Republic of Egypt                               | EGY  | EG   |
| El Salvador                                          | the Republic of El Salvador                              | SLV  | SV   |
| Equatorial Guinea                                    | the Republic of Equatorial Guinea                        | GNQ  | GQ   |
| Eritrea                                              | the State of Eritrea                                     | ERI  | ER   |
| Estonia                                              | the Republic of Estonia                                  | EST  | EE   |
| Eswatini                                             | the Kingdom of Eswatini                                  | SWZ  | SZ   |
| Ethiopia                                             | the Federal Democratic Republic of Ethiopia              | ETH  | ET   |
| Faroe Islands                                        | the Faroe Islands                                        | FRO  | FO   |
| Fiji                                                 | the Republic of Fiji                                     | FJI  | FJ   |
| Finland                                              | the Republic of Finland                                  | FIN  | FI   |
| France                                               | the French Republic                                      | FRA  | FR   |
| Gabon                                                | the Gabonese Republic                                    | GAB  | GA   |
| Gambia                                               | the Republic of the Gambia                               | GMB  | GM   |
| Georgia                                              | Georgia                                                  | GEO  | GE   |
| Germany                                              | the Federal Republic of Germany                          | DEU  | DE   |
| Ghana                                                | the Republic of Ghana                                    | GHA  | GH   |
| Greece                                               | the Hellenic Republic                                    | GRC  | GR   |
| Grenada                                              | Grenada                                                  | GRD  | GD   |
| Guatemala                                            | the Republic of Guatemala                                | GTM  | GT   |
| Guinea                                               | the Republic of Guinea                                   | GIN  | GN   |
| Guinea-Bissau                                        | the Republic of Guinea-Bissau                            | GNB  | GW   |
| Guyana                                               | the Co-operative Republic of Guyana                      | GUY  | GY   |
| Haiti                                                | the Republic of Haiti                                    | HTI  | HT   |
| Honduras                                             | the Republic of Honduras                                 | HND  | HN   |
| Hungary                                              | Hungary                                                  | HUN  | HU   |
| Iceland                                              | the Republic of Iceland                                  | ISL  | IS   |
| India                                                | the Republic of India                                    | IND  | IN   |
| Indonesia                                            | the Republic of Indonesia                                | IDN  | ID   |
| Iran (Islamic Republic of)                           | the Islamic Republic of Iran                             | IRN  | IR   |
| Iraq                                                 | the Republic of Iraq                                     | IRQ  | IQ   |
| Ireland                                              | Ireland                                                  | IRL  | IE   |
| Israel                                               | the State of Israel                                      | ISR  | IL   |
| Italy                                                | the Republic of Italy                                    | ITA  | IT   |
| Jamaica                                              | Jamaica                                                  | JAM  | JM   |
| Japan                                                | Japan                                                    | JPN  | JP   |
| Jordan                                               | the Hashemite Kingdom of Jordan                          | JOR  | JO   |
| Kazakhstan                                           | the Republic of Kazakhstan                               | KAZ  | KZ   |
| Kenya                                                | the Republic of Kenya                                    | KEN  | KE   |
| Kiribati                                             | the Republic of Kiribati                                 | KIR  | KI   |
| Kuwait                                               | the State of Kuwait                                      | KWT  | KW   |
| Kyrgyzstan                                           | the Kyrgyz Republic                                      | KGZ  | KG   |
| Lao People's Democratic Republic                     | the Lao People's Democratic Republic                     | LAO  | LA   |
| Latvia                                               | the Republic of Latvia                                   | LVA  | LV   |
| Lebanon                                              | the Lebanese Republic                                    | LBN  | LB   |
| Lesotho                                              | the Kingdom of Lesotho                                   | LSO  | LS   |
| Liberia                                              | the Republic of Liberia                                  | LBR  | LR   |
| Libya                                                | the State of Libya                                       | LBY  | LY   |
| Lithuania                                            | the Republic of Lithuania                                | LTU  | LT   |
| Luxembourg                                           | the Grand Duchy of Luxembourg                            | LUX  | LU   |
| Madagascar                                           | the Republic of Madagascar                               | MDG  | MG   |
| Malawi                                               | the Republic of Malawi                                   | MWI  | MW   |
| Malaysia                                             | Malaysia                                                 | MYS  | MY   |
| Maldives                                             | the Republic of Maldives                                 | MDV  | MV   |
| Mali                                                 | the Republic of Mali                                     | MLI  | ML   |
| Malta                                                | the Republic of Malta                                    | MLT  | MT   |
| Marshall Islands                                     | the Republic of the Marshall Islands                     | MHL  | MH   |
| Mauritania                                           | the Islamic Republic of Mauritania                       | MRT  | MR   |
| Mauritius                                            | the Republic of Mauritius                                | MUS  | MU   |
| Mexico                                               | the United Mexican States                                | MEX  | MX   |
| Micronesia (Federated States of)                     | the Federated States of Micronesia                       | FSM  | FM   |
| Monaco                                               | the Principality of Monaco                               | MCO  | MC   |
| Mongolia                                             | Mongolia                                                 | MNG  | MN   |
| Montenegro                                           | Montenegro                                               | MNE  | ME   |
| Morocco                                              | the Kingdom of Morocco                                   | MAR  | MA   |
| Mozambique                                           | the Republic of Mozambique                               | MOZ  | MZ   |
| Myanmar                                              | the Republic of the Union of Myanmar                     | MMR  | MM   |
| Namibia                                              | the Republic of Namibia                                  | NAM  | NA   |
| Nauru                                                | the Republic of Nauru                                    | NRU  | NR   |
| Nepal                                                | the Federal Democratic Republic of Nepal                 | NPL  | NP   |
| Netherlands                                          | the Kingdom of the Netherlands                           | NLD  | NL   |
| New Zealand                                          | New Zealand                                              | NZL  | NZ   |
| Nicaragua                                            | the Republic of Nicaragua                                | NIC  | NI   |
| Niger                                                | the Republic of the Niger                                | NER  | NE   |
| Nigeria                                              | the Federal Republic of Nigeria                          | NGA  | NG   |
| Niue                                                 | Niue                                                     | NIU  | NU   |
| North Macedonia                                      | the Republic of North Macedonia                          | MKD  | MK   |
| Norway                                               | the Kingdom of Norway                                    | NOR  | NO   |
| Oman                                                 | the Sultanate of Oman                                    | OMN  | OM   |
| Pakistan                                             | the Islamic Republic of Pakistan                         | PAK  | PK   |
| Palau                                                | the Republic of Palau                                    | PLW  | PW   |
| Panama                                               | the Republic of Panama                                   | PAN  | PA   |
| Papua New Guinea                                     | Independent State of Papua New Guinea                    | PNG  | PG   |
| Paraguay                                             | the Republic of Paraguay                                 | PRY  | PY   |
| Peru                                                 | the Republic of Peru                                     | PER  | PE   |
| Philippines                                          | the Republic of the Philippines                          | PHL  | PH   |
| Poland                                               | the Republic of Poland                                   | POL  | PL   |
| Portugal                                             | the Portuguese Republic                                  | PRT  | PT   |
| Qatar                                                | the State of Qatar                                       | QAT  | QA   |
| Republic of Korea                                    | the Republic of Korea                                    | KOR  | KR   |
| Republic of Moldova                                  | the Republic of Moldova                                  | MDA  | MD   |
| Romania                                              | Romania                                                  | ROU  | RO   |
| Russian Federation                                   | the Russian Federation                                   | RUS  | RU   |
| Rwanda                                               | the Republic of Rwanda                                   | RWA  | RW   |
| Saint Kitts and Nevis                                | Saint Kitts and Nevis                                    | KNA  | KN   |
| Saint Lucia                                          | Saint Lucia                                              | LCA  | LC   |
| Saint Vincent and the Grenadines                     | Saint Vincent and the Grenadines                         | VCT  | VC   |
| Samoa                                                | the Independent State of Samoa                           | WSM  | WS   |
| San Marino                                           | the Republic of San Marino                               | SMR  | SM   |
| Sao Tome and Principe                                | the Democratic Republic of Sao Tome and Principe         | STP  | ST   |
| Saudi Arabia                                         | the Kingdom of Saudi Arabia                              | SAU  | SA   |
| Senegal                                              | the Republic of Senegal                                  | SEN  | SN   |
| Serbia                                               | the Republic of Serbia                                   | SRB  | RS   |
| Seychelles                                           | the Republic of Seychelles                               | SYC  | SC   |
| Sierra Leone                                         | the Republic of Sierra Leone                             | SLE  | SL   |
| Singapore                                            | the Republic of Singapore                                | SGP  | SG   |
| Slovakia                                             | the Slovak Republic                                      | SVK  | SK   |
| Slovenia                                             | the Republic of Slovenia                                 | SVN  | SI   |
| Solomon Islands                                      | Solomon Islands                                          | SLB  | SB   |
| Somalia                                              | the Federal Republic of Somalia                          | SOM  | SO   |
| South Africa                                         | the Republic of South Africa                             | ZAF  | ZA   |
| South Sudan                                          | the Republic of South Sudan                              | SSD  | SS   |
| Spain                                                | the Kingdom of Spain                                     | ESP  | ES   |
| Sri Lanka                                            | the Democratic Socialist Republic of Sri Lanka           | LKA  | LK   |
| Sudan                                                | the Republic of the Sudan                                | SDN  | SD   |
| Suriname                                             | the Republic of Suriname                                 | SUR  | SR   |
| Sweden                                               | the Kingdom of Sweden                                    | SWE  | SE   |
| Switzerland                                          | the Swiss Confederation                                  | CHE  | CH   |
| Syrian Arab Republic                                 | the Syrian Arab Republic                                 | SYR  | SY   |
| Tajikistan                                           | the Republic of Tajikistan                               | TJK  | TJ   |
| Thailand                                             | the Kingdom of Thailand                                  | THA  | TH   |
| Timor-Leste                                          | the Democratic Republic of Timor-Leste                   | TLS  | TL   |
| Togo                                                 | the Togolese Republic                                    | TGO  | TG   |
| Tokelau                                              | Tokelau                                                  | TKL  | TK   |
| Tonga                                                | the Kingdom of Tonga                                     | TON  | TO   |
| Trinidad and Tobago                                  | the Republic of Trinidad and Tobago                      | TTO  | TT   |
| Tunisia                                              | the Republic of Tunisia                                  | TUN  | TN   |
| Turkey                                               | the Republic of Turkey                                   | TUR  | TR   |
| Turkmenistan                                         | Turkmenistan                                             | TKM  | TM   |
| Tuvalu                                               | Tuvalu                                                   | TUV  | TV   |
| Uganda                                               | the Republic of Uganda                                   | UGA  | UG   |
| Ukraine                                              | Ukraine                                                  | UKR  | UA   |
| United Arab Emirates                                 | the United Arab Emirates                                 | ARE  | AE   |
| United Kingdom of Great Britain and Northern Ireland | the United Kingdom of Great Britain and Northern Ireland | GBR  | GB   |
| United Republic of Tanzania                          | the United Republic of Tanzania                          | TZA  | TZ   |
| United States of America                             | the United States of America                             | USA  | US   |
| Uruguay                                              | the Eastern Republic of Uruguay                          | URY  | UY   |
| Uzbekistan                                           | the Republic of Uzbekistan                               | UZB  | UZ   |
| Vanuatu                                              | the Republic of Vanuatu                                  | VUT  | VU   |
| Venezuela (Bolivarian Republic of)                   | the Bolivarian Republic of Venezuela                     | VEN  | VE   |
| Viet Nam                                             | the Socialist Republic of Viet Nam                       | VNM  | VN   |
| Yemen                                                | the Republic of Yemen                                    | YEM  | YE   |
| Zambia                                               | the Republic of Zambia                                   | ZMB  | ZM   |
| Zimbabwe                                             | the Republic of Zimbabwe                                 | ZWE  | ZW   |
+------------------------------------------------------+----------------------------------------------------------+------+------+

Year of manufacture - Y
Accordingly, the year and week of manufacture are also alphanumeric codes, and you’ll see them right after the location code. Fortunately, they are simpler to comprehend. You must remember that the fourth character of the serial number is the year of manufacture and whether the device is assembled in the first or second half of the year. The following table shows how to interpret the character:

Date of Manufacture Codes
+------+---------+----------+
| CODE | RELEASE |          |
+------+---------+----------+
| A    |    2021 | 1st half |
| B    |    2021 | 2nd half |
| C    |    2022 | 1st half |
| D    |    2022 | 2nd half |
| E    |    2023 | 1st half |
| F    |    2023 | 2nd half |
| G    |    2024 | 1st half |
| H    |    2024 | 2nd half |
| I    |    2025 | 1st half |
| J    |    2025 | 2nd half |
| K    |    2026 | 1st half |
| L    |    2026 | 2nd half |
| M    |    2027 | 1st half |
| N    |    2027 | 2nd half |
| O    |    2028 | 1st half |
| P    |    2028 | 2nd half |
| Q    |    2029 | 1st half |
| R    |    2029 | 2nd half |
| S    |    2030 | 1st half |
| T    |    2030 | 2nd half |
| U    |    2031 | 1st half |
| V    |    2031 | 2nd half |
| W    |    2032 | 1st half |
| X    |    2032 | 2nd half |
| Y    |    2033 | 1st half |
| Z    |    2033 | 2nd half |
+------+---------+----------+

Week of manufacture - WW
The following table shows how to interpret the character:
+-------------+----+
| week number |    |
+-------------+----+
|           1 | 01 |
|           2 | 02 |
|           3 | 03 |
|           4 | 04 |
|           5 | 05 |
|           6 | 06 |
|           7 | 07 |
|           8 | 08 |
|           9 | 09 |
|          10 | A1 |
|          11 | B2 |
|          12 | C3 |
|          13 | D4 |
|          14 | E5 |
|          15 | F6 |
|          16 | 10 |
|          17 | 11 |
|          18 | 12 |
|          19 | 13 |
|          20 | 14 |
|          21 | 15 |
|          22 | 16 |
|          23 | 17 |
|          24 | 18 |
|          25 | 19 |
|          26 | 1A |
|          27 | 1B |
|          28 | 1C |
|          29 | 1D |
|          30 | 1E |
|          31 | 1F |
|          32 | 20 |
|          33 | 21 |
|          34 | 22 |
|          35 | 23 |
|          36 | 24 |
|          37 | 25 |
|          38 | 26 |
|          39 | 27 |
|          40 | 28 |
|          41 | 29 |
|          42 | 2A |
|          43 | 2B |
|          44 | 2C |
|          45 | 2D |
|          46 | 2E |
|          47 | 2F |
|          48 | 30 |
|          49 | 31 |
|          50 | 32 |
|          51 | 33 |
|          52 | 34 |
|          53 | 35 |
+-------------+----+

Unique Indentifier - SSS
A unique identifier (UID) is an identifier that is guaranteed to be unique among all identifiers used for those objects and for a specific purpose. The concept was formalized early in the development of Computer science and Information systems. In general, it was associated with an atomic data type.

This can be anythiny from 000 to 999 and anything in between. So this is one is free to use.

Model Number - CC
The Model Number is made of two variables. The first two diggets are the Type number that represents a HomeKit category. Secondly the next two diggets are the model number that represents a Type of processor used. So if we have Model Number 1066, this means its a HomeKit Accessory sensor build upon a ESP8266 XXX.

+----------------------------------------+-------------+
|                Category                | Type number |
+----------------------------------------+-------------+
| HomeKit Accessory other                |          01 |
| HomeKit Accessory bridge               |          02 |
| HomeKit Accessory fan                  |          03 |
| HomeKit Accessory garage               |          04 |
| HomeKit Accessory lightbulb            |          05 |
| HomeKit Accessory door lock            |          06 |
| HomeKit Accessory outlet               |          07 |
| HomeKit Accessory switch               |          08 |
| HomeKit Accessory thermostat           |          09 |
| HomeKit Accessory sensor               |          10 |
| HomeKit Accessory security system      |          11 |
| HomeKit Accessory door                 |          12 |
| HomeKit Accessory window               |          13 |
| HomeKit Accessory window covering      |          14 |
| HomeKit Accessory programmable switch  |          15 |
| HomeKit Accessory range extender       |          16 |
| HomeKit Accessory ip camera            |          17 |
| HomeKit Accessory video door bell      |          18 |
| HomeKit Accessory air purifier         |          19 |
| HomeKit Accessory heater               |          20 |
| HomeKit Accessory air conditioner      |          21 |
| HomeKit Accessory humidifier           |          22 |
| HomeKit Accessory dehumidifier         |          23 |
| HomeKit Accessory apple tv             |          24 |
| HomeKit Accessory speaker              |          26 |
| HomeKit Accessory airport              |          27 |
| HomeKit Accessory sprinkler            |          28 |
| HomeKit Accessory faucet               |          29 |
| HomeKit Accessory shower head          |          30 |
| HomeKit Accessory television           |          31 |
| HomeKit Accessory target controller    |          32 |
+----------------------------------------+-------------+

Processor type - PP

+-------------+--------------+
|    Type     | Model number |
+-------------+--------------+
| ESP8266 XXX | 66           |
| ESP32 XXX   | 32           |
| ESP8285     | 85           |
+-------------+--------------+




Model

To simply put, the standard form of ESP HomeKit Accessory serial number is AABCCDDDEEF. Again, it should be at least 11 to 12 characters, which may vary depending on your device’s manufacturing year, or whether it is new or old. Say, for instance, your serial number is 79049XXXA4S, you can decode it as the first two digits 79 for the factory (Foxconn), 0 for the last digit of the manufacture year (2010) and week 49, A4 for the color (black), and S for the st

Storage (16GB, iPhone 4). Hence, these details are enough to know if your Apple product is original and genuine.


+----+------------+-----------+-------------------------------+---+-------+
|    |  Category  | Processor | Manufacturing Location (ISO2) |   | Stage |
+----+------------+-----------+-------------------------------+---+-------+
| S  |     CC     |    PP     |              LL               | / |   A   |
+----+------------+-----------+-------------------------------+---+-------+



Example: S C0 66 NL / A - HOMEKIT_CHARACTERISTIC_(MODEL, "SC066NL/A");

Category Number - CC
The Model Number is made of two variables. The first two diggets are the Type number that represents a HomeKit category. Secondly the next two diggets are the model number that represents a Type of processor used. So if we have Model Number 1066, this means its a HomeKit Accessory sensor build upon a ESP8266 XXX.

+----------------------------------------+-------------+
|                Category                | Type number |
+----------------------------------------+-------------+
| HomeKit Accessory other                |          A1 |
| HomeKit Accessory bridge               |          A2 |
| HomeKit Accessory fan                  |          A3 |
| HomeKit Accessory garage               |          A4 |
| HomeKit Accessory lightbulb            |          B5 |
| HomeKit Accessory door lock            |          B6 |
| HomeKit Accessory outlet               |          B7 |
| HomeKit Accessory switch               |          B8 |
| HomeKit Accessory thermostat           |          C9 |
| HomeKit Accessory sensor               |          C0 |
| HomeKit Accessory security system      |          C1 |
| HomeKit Accessory door                 |          C2 |
| HomeKit Accessory window               |          D3 |
| HomeKit Accessory window covering      |          D4 |
| HomeKit Accessory programmable switch  |          D5 |
| HomeKit Accessory range extender       |          D6 |
| HomeKit Accessory ip camera            |          E7 |
| HomeKit Accessory video door bell      |          E8 |
| HomeKit Accessory air purifier         |          E9 |
| HomeKit Accessory heater               |          E0 |
| HomeKit Accessory air conditioner      |          F1 |
| HomeKit Accessory humidifier           |          F2 |
| HomeKit Accessory dehumidifier         |          F3 |
| HomeKit Accessory apple tv             |          F4 |
| HomeKit Accessory speaker              |          G6 |
| HomeKit Accessory airport              |          G7 |
| HomeKit Accessory sprinkler            |          G8 |
| HomeKit Accessory faucet               |          G9 |
| HomeKit Accessory shower head          |          H0 |
| HomeKit Accessory television           |          H1 |
| HomeKit Accessory target controller    |          H2 |
+----------------------------------------+-------------+

Processor type - PP

+-------------+--------------+
|    Type     | Model number |
+-------------+--------------+
| ESP8266 XXX | 66           |
| ESP32 XXX   | 32           |
| ESP8285     | 85           |
+-------------+--------------+

Manufacturing Location - LL
The first three characters of your serial number are simply the abbreviation of the country your device is made. They are location codes,that can determine the location where your ESP HomeKit Accessory product was "created". likewise, it refers to the developper country that created your ESP HomeKit Accessory. Hence, it goes as follows:

+------------------------------------------------------+----------------------------------------------------------+------+------+
|                      Short name                      |                      Official name                       | ISO3 | ISO2 |
+------------------------------------------------------+----------------------------------------------------------+------+------+
| Afghanistan                                          | the Islamic Republic of Afghanistan                      | AFG  | AF   |
| Albania                                              | the Republic of Albania                                  | ALB  | AL   |
| Algeria                                              | the People's Democratic Republic of Algeria              | DZA  | DZ   |
| Andorra                                              | the Principality of Andorra                              | AND  | AD   |
| Angola                                               | the Republic of Angola                                   | AGO  | AO   |
| Antigua and Barbuda                                  | Antigua and Barbuda                                      | ATG  | AG   |
| Argentina                                            | the Argentine Republic                                   | ARG  | AR   |
| Armenia                                              | the Republic of Armenia                                  | ARM  | AM   |
| Australia                                            | Australia                                                | AUS  | AU   |
| Austria                                              | the Republic of Austria                                  | AUT  | AT   |
| Azerbaijan                                           | the Republic of Azerbaijan                               | AZE  | AZ   |
| Bahamas                                              | the Commonwealth of the Bahamas                          | BHS  | BS   |
| Bahrain                                              | the Kingdom of Bahrain                                   | BHR  | BH   |
| Bangladesh                                           | the People's Republic of Bangladesh                      | BGD  | BD   |
| Barbados                                             | Barbados                                                 | BRB  | BB   |
| Belarus                                              | the Republic of Belarus                                  | BLR  | BY   |
| Belgium                                              | the Kingdom of Belgium                                   | BEL  | BE   |
| Belize                                               | Belize                                                   | BLZ  | BZ   |
| Benin                                                | the Republic of Benin                                    | BEN  | BJ   |
| Bhutan                                               | the Kingdom of Bhutan                                    | BTN  | BT   |
| Bolivia (Plurinational State of)                     | the Plurinational State of Bolivia                       | BOL  | BO   |
| Bosnia and Herzegovina                               | Bosnia and Herzegovina                                   | BIH  | BA   |
| Botswana                                             | the Republic of Botswana                                 | BWA  | BW   |
| Brazil                                               | the Federative Republic of Brazil                        | BRA  | BR   |
| Brunei Darussalam                                    | Brunei Darussalam                                        | BRN  | BN   |
| Bulgaria                                             | the Republic of Bulgaria                                 | BGR  | BG   |
| Burkina Faso                                         | Burkina Faso                                             | BFA  | BF   |
| Burundi                                              | the Republic of Burundi                                  | BDI  | BI   |
| Cabo Verde                                           | the Republic of Cabo Verde                               | CPV  | CV   |
| Cambodia                                             | the Kingdom of Cambodia                                  | KHM  | KH   |
| Cameroon                                             | the Republic of Cameroon                                 | CMR  | CM   |
| Canada                                               | Canada                                                   | CAN  | CA   |
| Central African Republic                             | the Central African Republic                             | CAF  | CF   |
| Chad                                                 | the Republic of Chad                                     | TCD  | TD   |
| Chile                                                | the Republic of Chile                                    | CHL  | CL   |
| China                                                | the People's Republic of China                           | CHN  | CN   |
| Colombia                                             | the Republic of Colombia                                 | COL  | CO   |
| Comoros                                              | the Union of the Comoros                                 | COM  | KM   |
| Congo                                                | the Republic of the Congo                                | COG  | CG   |
| Cook Islands                                         | the Cook Islands                                         | COK  | CK   |
| Costa Rica                                           | the Republic of Costa Rica                               | CRI  | CR   |
| Croatia                                              | the Republic of Croatia                                  | HRV  | HR   |
| Cuba                                                 | the Republic of Cuba                                     | CUB  | CU   |
| Cyprus                                               | the Republic of Cyprus                                   | CYP  | CY   |
| Czechia                                              | the Czech Republic                                       | CZE  | CZ   |
| Côte d'Ivoire                                        | the Republic of Côte d'Ivoire                            | CIV  | CI   |
| Democratic People's Republic of Korea                | the Democratic People's Republic of Korea                | PRK  | KP   |
| Democratic Republic of the Congo                     | the Democratic Republic of the Congo                     | COD  | CD   |
| Denmark                                              | the Kingdom of Denmark                                   | DNK  | DK   |
| Djibouti                                             | the Republic of Djibouti                                 | DJI  | DJ   |
| Dominica                                             | the Commonwealth of Dominica                             | DMA  | DM   |
| Dominican Republic                                   | the Dominican Republic                                   | DOM  | DO   |
| Ecuador                                              | the Republic of Ecuador                                  | ECU  | EC   |
| Egypt                                                | the Arab Republic of Egypt                               | EGY  | EG   |
| El Salvador                                          | the Republic of El Salvador                              | SLV  | SV   |
| Equatorial Guinea                                    | the Republic of Equatorial Guinea                        | GNQ  | GQ   |
| Eritrea                                              | the State of Eritrea                                     | ERI  | ER   |
| Estonia                                              | the Republic of Estonia                                  | EST  | EE   |
| Eswatini                                             | the Kingdom of Eswatini                                  | SWZ  | SZ   |
| Ethiopia                                             | the Federal Democratic Republic of Ethiopia              | ETH  | ET   |
| Faroe Islands                                        | the Faroe Islands                                        | FRO  | FO   |
| Fiji                                                 | the Republic of Fiji                                     | FJI  | FJ   |
| Finland                                              | the Republic of Finland                                  | FIN  | FI   |
| France                                               | the French Republic                                      | FRA  | FR   |
| Gabon                                                | the Gabonese Republic                                    | GAB  | GA   |
| Gambia                                               | the Republic of the Gambia                               | GMB  | GM   |
| Georgia                                              | Georgia                                                  | GEO  | GE   |
| Germany                                              | the Federal Republic of Germany                          | DEU  | DE   |
| Ghana                                                | the Republic of Ghana                                    | GHA  | GH   |
| Greece                                               | the Hellenic Republic                                    | GRC  | GR   |
| Grenada                                              | Grenada                                                  | GRD  | GD   |
| Guatemala                                            | the Republic of Guatemala                                | GTM  | GT   |
| Guinea                                               | the Republic of Guinea                                   | GIN  | GN   |
| Guinea-Bissau                                        | the Republic of Guinea-Bissau                            | GNB  | GW   |
| Guyana                                               | the Co-operative Republic of Guyana                      | GUY  | GY   |
| Haiti                                                | the Republic of Haiti                                    | HTI  | HT   |
| Honduras                                             | the Republic of Honduras                                 | HND  | HN   |
| Hungary                                              | Hungary                                                  | HUN  | HU   |
| Iceland                                              | the Republic of Iceland                                  | ISL  | IS   |
| India                                                | the Republic of India                                    | IND  | IN   |
| Indonesia                                            | the Republic of Indonesia                                | IDN  | ID   |
| Iran (Islamic Republic of)                           | the Islamic Republic of Iran                             | IRN  | IR   |
| Iraq                                                 | the Republic of Iraq                                     | IRQ  | IQ   |
| Ireland                                              | Ireland                                                  | IRL  | IE   |
| Israel                                               | the State of Israel                                      | ISR  | IL   |
| Italy                                                | the Republic of Italy                                    | ITA  | IT   |
| Jamaica                                              | Jamaica                                                  | JAM  | JM   |
| Japan                                                | Japan                                                    | JPN  | JP   |
| Jordan                                               | the Hashemite Kingdom of Jordan                          | JOR  | JO   |
| Kazakhstan                                           | the Republic of Kazakhstan                               | KAZ  | KZ   |
| Kenya                                                | the Republic of Kenya                                    | KEN  | KE   |
| Kiribati                                             | the Republic of Kiribati                                 | KIR  | KI   |
| Kuwait                                               | the State of Kuwait                                      | KWT  | KW   |
| Kyrgyzstan                                           | the Kyrgyz Republic                                      | KGZ  | KG   |
| Lao People's Democratic Republic                     | the Lao People's Democratic Republic                     | LAO  | LA   |
| Latvia                                               | the Republic of Latvia                                   | LVA  | LV   |
| Lebanon                                              | the Lebanese Republic                                    | LBN  | LB   |
| Lesotho                                              | the Kingdom of Lesotho                                   | LSO  | LS   |
| Liberia                                              | the Republic of Liberia                                  | LBR  | LR   |
| Libya                                                | the State of Libya                                       | LBY  | LY   |
| Lithuania                                            | the Republic of Lithuania                                | LTU  | LT   |
| Luxembourg                                           | the Grand Duchy of Luxembourg                            | LUX  | LU   |
| Madagascar                                           | the Republic of Madagascar                               | MDG  | MG   |
| Malawi                                               | the Republic of Malawi                                   | MWI  | MW   |
| Malaysia                                             | Malaysia                                                 | MYS  | MY   |
| Maldives                                             | the Republic of Maldives                                 | MDV  | MV   |
| Mali                                                 | the Republic of Mali                                     | MLI  | ML   |
| Malta                                                | the Republic of Malta                                    | MLT  | MT   |
| Marshall Islands                                     | the Republic of the Marshall Islands                     | MHL  | MH   |
| Mauritania                                           | the Islamic Republic of Mauritania                       | MRT  | MR   |
| Mauritius                                            | the Republic of Mauritius                                | MUS  | MU   |
| Mexico                                               | the United Mexican States                                | MEX  | MX   |
| Micronesia (Federated States of)                     | the Federated States of Micronesia                       | FSM  | FM   |
| Monaco                                               | the Principality of Monaco                               | MCO  | MC   |
| Mongolia                                             | Mongolia                                                 | MNG  | MN   |
| Montenegro                                           | Montenegro                                               | MNE  | ME   |
| Morocco                                              | the Kingdom of Morocco                                   | MAR  | MA   |
| Mozambique                                           | the Republic of Mozambique                               | MOZ  | MZ   |
| Myanmar                                              | the Republic of the Union of Myanmar                     | MMR  | MM   |
| Namibia                                              | the Republic of Namibia                                  | NAM  | NA   |
| Nauru                                                | the Republic of Nauru                                    | NRU  | NR   |
| Nepal                                                | the Federal Democratic Republic of Nepal                 | NPL  | NP   |
| Netherlands                                          | the Kingdom of the Netherlands                           | NLD  | NL   |
| New Zealand                                          | New Zealand                                              | NZL  | NZ   |
| Nicaragua                                            | the Republic of Nicaragua                                | NIC  | NI   |
| Niger                                                | the Republic of the Niger                                | NER  | NE   |
| Nigeria                                              | the Federal Republic of Nigeria                          | NGA  | NG   |
| Niue                                                 | Niue                                                     | NIU  | NU   |
| North Macedonia                                      | the Republic of North Macedonia                          | MKD  | MK   |
| Norway                                               | the Kingdom of Norway                                    | NOR  | NO   |
| Oman                                                 | the Sultanate of Oman                                    | OMN  | OM   |
| Pakistan                                             | the Islamic Republic of Pakistan                         | PAK  | PK   |
| Palau                                                | the Republic of Palau                                    | PLW  | PW   |
| Panama                                               | the Republic of Panama                                   | PAN  | PA   |
| Papua New Guinea                                     | Independent State of Papua New Guinea                    | PNG  | PG   |
| Paraguay                                             | the Republic of Paraguay                                 | PRY  | PY   |
| Peru                                                 | the Republic of Peru                                     | PER  | PE   |
| Philippines                                          | the Republic of the Philippines                          | PHL  | PH   |
| Poland                                               | the Republic of Poland                                   | POL  | PL   |
| Portugal                                             | the Portuguese Republic                                  | PRT  | PT   |
| Qatar                                                | the State of Qatar                                       | QAT  | QA   |
| Republic of Korea                                    | the Republic of Korea                                    | KOR  | KR   |
| Republic of Moldova                                  | the Republic of Moldova                                  | MDA  | MD   |
| Romania                                              | Romania                                                  | ROU  | RO   |
| Russian Federation                                   | the Russian Federation                                   | RUS  | RU   |
| Rwanda                                               | the Republic of Rwanda                                   | RWA  | RW   |
| Saint Kitts and Nevis                                | Saint Kitts and Nevis                                    | KNA  | KN   |
| Saint Lucia                                          | Saint Lucia                                              | LCA  | LC   |
| Saint Vincent and the Grenadines                     | Saint Vincent and the Grenadines                         | VCT  | VC   |
| Samoa                                                | the Independent State of Samoa                           | WSM  | WS   |
| San Marino                                           | the Republic of San Marino                               | SMR  | SM   |
| Sao Tome and Principe                                | the Democratic Republic of Sao Tome and Principe         | STP  | ST   |
| Saudi Arabia                                         | the Kingdom of Saudi Arabia                              | SAU  | SA   |
| Senegal                                              | the Republic of Senegal                                  | SEN  | SN   |
| Serbia                                               | the Republic of Serbia                                   | SRB  | RS   |
| Seychelles                                           | the Republic of Seychelles                               | SYC  | SC   |
| Sierra Leone                                         | the Republic of Sierra Leone                             | SLE  | SL   |
| Singapore                                            | the Republic of Singapore                                | SGP  | SG   |
| Slovakia                                             | the Slovak Republic                                      | SVK  | SK   |
| Slovenia                                             | the Republic of Slovenia                                 | SVN  | SI   |
| Solomon Islands                                      | Solomon Islands                                          | SLB  | SB   |
| Somalia                                              | the Federal Republic of Somalia                          | SOM  | SO   |
| South Africa                                         | the Republic of South Africa                             | ZAF  | ZA   |
| South Sudan                                          | the Republic of South Sudan                              | SSD  | SS   |
| Spain                                                | the Kingdom of Spain                                     | ESP  | ES   |
| Sri Lanka                                            | the Democratic Socialist Republic of Sri Lanka           | LKA  | LK   |
| Sudan                                                | the Republic of the Sudan                                | SDN  | SD   |
| Suriname                                             | the Republic of Suriname                                 | SUR  | SR   |
| Sweden                                               | the Kingdom of Sweden                                    | SWE  | SE   |
| Switzerland                                          | the Swiss Confederation                                  | CHE  | CH   |
| Syrian Arab Republic                                 | the Syrian Arab Republic                                 | SYR  | SY   |
| Tajikistan                                           | the Republic of Tajikistan                               | TJK  | TJ   |
| Thailand                                             | the Kingdom of Thailand                                  | THA  | TH   |
| Timor-Leste                                          | the Democratic Republic of Timor-Leste                   | TLS  | TL   |
| Togo                                                 | the Togolese Republic                                    | TGO  | TG   |
| Tokelau                                              | Tokelau                                                  | TKL  | TK   |
| Tonga                                                | the Kingdom of Tonga                                     | TON  | TO   |
| Trinidad and Tobago                                  | the Republic of Trinidad and Tobago                      | TTO  | TT   |
| Tunisia                                              | the Republic of Tunisia                                  | TUN  | TN   |
| Turkey                                               | the Republic of Turkey                                   | TUR  | TR   |
| Turkmenistan                                         | Turkmenistan                                             | TKM  | TM   |
| Tuvalu                                               | Tuvalu                                                   | TUV  | TV   |
| Uganda                                               | the Republic of Uganda                                   | UGA  | UG   |
| Ukraine                                              | Ukraine                                                  | UKR  | UA   |
| United Arab Emirates                                 | the United Arab Emirates                                 | ARE  | AE   |
| United Kingdom of Great Britain and Northern Ireland | the United Kingdom of Great Britain and Northern Ireland | GBR  | GB   |
| United Republic of Tanzania                          | the United Republic of Tanzania                          | TZA  | TZ   |
| United States of America                             | the United States of America                             | USA  | US   |
| Uruguay                                              | the Eastern Republic of Uruguay                          | URY  | UY   |
| Uzbekistan                                           | the Republic of Uzbekistan                               | UZB  | UZ   |
| Vanuatu                                              | the Republic of Vanuatu                                  | VUT  | VU   |
| Venezuela (Bolivarian Republic of)                   | the Bolivarian Republic of Venezuela                     | VEN  | VE   |
| Viet Nam                                             | the Socialist Republic of Viet Nam                       | VNM  | VN   |
| Yemen                                                | the Republic of Yemen                                    | YEM  | YE   |
| Zambia                                               | the Republic of Zambia                                   | ZMB  | ZM   |
| Zimbabwe                                             | the Republic of Zimbabwe                                 | ZWE  | ZW   |
+------------------------------------------------------+----------------------------------------------------------+------+------+

Development stage - A

+--------------------------------+---+
|       development Stage        |   |
+--------------------------------+---+
| Alpha                          | A |
| Beta                           | B |
| Release candidate              | R |
| Stable release                 | S |
| Release to manufacturing (RTM) | T |
+--------------------------------+---+



Thus, understanding these characters unlocks more intricate details about your device. For example, your serial number can tell you the age of your product, or if your warranty is still valid. It can also inform you about the coverage of your AppleCare plan, or if your gadget is locked or not.



ODE	COUNTRY
http://www.fao.org/countryprofiles/iso3list/en/
https://ozh.github.io/ascii-tables/
