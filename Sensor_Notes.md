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

# Sensor 2: KY-028 Temperature Sensor

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

