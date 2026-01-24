# Sensor Notes

---

# Sensor 1: KY-032 (Hindernis Detektor Module)

## Small description
The KY-032 is an infrared obstacle detection module. It uses an infrared transmitter and receiver to detect nearby objects by measuring reflected infrared radiation. The module processes the signal internally and provides a digital output indicating the presence or absence of an obstacle

## How to connect it
Connect it like this:

- GND → Arduino GND
- VCC → Arduino 5V
- OUT → Arduino D2
- EN → not connected (optional)

## My observation
From my observation, I saw that in the code we can change the number of pin anywhere and it will still do the work.

During testing, it was observed that adjusting the potentiometers can invert the sensor’s behavior. In one configuration, the output signal is HIGH when an obstacle is detected. In another configuration, the output remains HIGH by default and switches LOW when an object is detected.
This occurs because the comparator threshold crosses the received signal level. Fine adjustment is required, as small changes significantly affect the output behavior.

## Challenges I faced
and what i saw really challenging here is perfecting the angle of the potentiometers to get the desired function.

---

# Sensor 2: KY-028 (Temperature Sensor)

## Small description
The KY-028 is a temperature sensing module based on a thermistor. It provides both an analog temperature signal and a digital threshold output.

## How to connect it
Connect it like this:

- VCC → Arduino 5V
- GND → Arduino GND
- AO → Arduino A0
- DO → not connected (not needed)

## My observation
During the experiment, it was observed that when the sensor was exposed to cold conditions, the analog values read by the Arduino increased. When the temperature increased, the measured values decreased significantly.
This inverse relationship confirms the presence of an NTC thermistor and demonstrates how temperature affects electrical resistance and voltage output.

## Challenges I faced
The main challenge was understanding why the numbers go down when it gets hotter, but after testing it more than once it became clear.

---

# Sensor 3: KY-001 (Temperature Sensor (DS18B20))

## Small description
The KY-001 is a digital temperature sensor. It measures temperature and gives the Arduino the temperature as a real degree value (°C). It is very accurate because it sends digital data, not analog numbers.

## How to connect it
- GND → Arduino GND  
- VCC → Arduino 5V  
- SIG → Arduino D2  
- 4.7kΩ resistor between SIG and 5V  

Observation

During the experiment, it was observed that the KY-001 temperature sensor is highly sensitive and responds quickly to temperature changes. The sensor also provided accurate temperature readings in degrees Celsius, which made it easy to monitor and verify the measured values using the Serial Monitor.

Challenges

No challenges were faced during the connection or testing of the KY-001 sensor. The wiring and code execution worked correctly, and the sensor readings were stable and reliable.

---

# Sensor 4: KY-035 (Bihor Magnet Sensor)


## Small description
The KY-035 is an analog Hall effect sensor module. It detects magnetic fields and sends an analog value to the Arduino depending on the strength of the magnetic field near the sensor.


## How to connect it
- VCC → Arduino 5V
- GND → Arduino GND
- SIG → Arduino A0

Observation

During the experiment, it was observed that the output values of the KY-035 Hall effect sensor depend on the distance between the sensor and the magnetic field source. When a small magnet was moved farther away from the sensor, the measured analog values decreased. When the magnet was brought closer to the sensor, the values increased.

Because the magnet used was relatively weak, the sensor readings remained stable within a small range, approximately between 932 and 938.

Challenges

No major challenges were faced during the experiment. The sensor output was easy to observe and remained steady due to the weak magnet strength.

