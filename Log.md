# Work Log

## Day 1 (01.20.2026):
- Set up Arduino IDE
- Tested Arduino connection with laptop
- Learned how to use Serial Monitor

## Day 2 (01.22.2026):
- Tested KY-032 sensor
- Connected it to Arduino and checked the output
- Adjusted the potentiometers and observed different behavior

## Day 3 (01.23.2026):
- Tested KY-028 (temperature sensor)
- Observed lower temperature gives high arduino values and higher temperature gives low arduino values.
- Wrote sensor notes and documentation
  
- Tested KY-001 (Temperature Sensor)
- Connected KY-001 to Arduino (VCC, GND, SIG)
- Installed required libraries (OneWire, DallasTemperature)
- Uploaded the KY-001 code and tested temperature readings in °C
- Observed that the sensor is very sensitive and accurate
- No challenges faced during testing

## Day 4 (01.24.2026):
— Tested KY-035 (Bihor Magnet Sensor)
- Connected KY-035 to Arduino (VCC → 5V, GND → GND, SIG → A0)
- Uploaded the KY-035 code and opened Serial Monitor
- Tested the sensor using a small magnet
- Observed that the values depend on the distance between the magnet and the sensor
- Farther magnet → lower values, closer magnet → higher values
- Readings were steady between 932–938 because the magnet was weak
  
- Tested KY-027 (Magic Light Cup Module)
- Connected KY-027 to Arduino using the pins (G, +, S, L)
- Wiring used: G → GND, + → 5V, S → D2, L not connected
- Uploaded the code and tested the sensor output using Serial Monitor
- Observed that the sensor output changes depending on the position of the internal ball inside the cylinder
- Noted that the sensor can show tilt even on a flat surface, and show no tilt even when tilted
- Concluded that the sensor is not accurate for reliable tilt detection

- Tested KY-019 (5V Relay Module)
- Connected KY-019 relay module using pins (S, +, -)
- Wiring used: S → D7, + → 5V, - → GND
- Uploaded the relay code and tested switching
- Observed relay clicking ON and OFF successfully
- Noted that the relay only works on the pin written in the code (D7 in this experiment)
- No challenges faced

- Tested SEN-US01 (Ultrasonic Distance Sensor)
- Connected SEN-US01 to Arduino (VCC → 5V, GND → GND, TRIG → D9, ECHO → D10)
- Uploaded the code and tested distance measurement using Serial Monitor
- Observed very high accuracy and good performance for the sensor size
- Tested maximum distance around 190 cm and it still detected precisely
- Noted that when no object is detected, the sensor shows 1190 cm due to timeout/no echo

## NEW SENSORS:#Day 1 (3.30.2026)
— KY-012 (Active Buzzer Module)
- Connected KY-012 buzzer module (S → D8, + → 5V, - → GND)
- Uploaded the code and tested sound output
- Observed that the buzzer produces sound when receiving a signal
- Noted that it is mainly useful when combined with another sensor for warning systems
- No challenges faced

— KY-017 (Mercury Tilt Switch Module)
- Connected KY-017 sensor (S → D2, + → 5V, - → GND)
- Uploaded the code and tested tilt detection
- Observed that the sensor output depends on the internal moving element
- Noted that it may show no tilt even when tilted depending on position
- Concluded that the sensor is not very accurate

## Day 22.04.2026 — KY-004 (Push Button Module)
- Connected KY-004 button module (S → D2, + → 5V, - → GND)
- Uploaded the code and tested button input
- Observed that the logic was inverted (pressed when not pressed)
- Fixed the issue by changing HIGH to LOW in the code
- Verified correct behavior after modification

— KY-025 (Reed Switch Module)
- Connected KY-025 sensor (G → GND, + → 5V, DO → D2)
- Uploaded the code and tested magnetic detection
- Observed that the sensor detects magnet through the front tube
- Tested detection through glass and it worked correctly
- No challenges faced
