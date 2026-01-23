int tempPin = A0;
int tempValue;

void setup() {
  Serial.begin(9600);
}

void loop() {
  tempValue = analogRead(tempPin);

  Serial.print("Temperature raw value: ");
  Serial.println(tempValue);

  delay(500);
}
