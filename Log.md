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
