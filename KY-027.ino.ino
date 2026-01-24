int tiltPin = 2;     // DO pin from KY-027
int tiltState;

void setup() {
  pinMode(tiltPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  tiltState = digitalRead(tiltPin);

  if (tiltState == HIGH) {
    Serial.println("Tilt detected");
  } else {
    Serial.println("No tilt");
  }

  delay(200);
}