int sensorPin = 8;   // KY-032 OUT pin
int sensorValue;

void setup() {
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = digitalRead(sensorPin);

  if (sensorValue == HIGH) {
    Serial.println("Obstacle detected!");
  } else {
    Serial.println("No obstacle");
  }

  delay(200);
}
