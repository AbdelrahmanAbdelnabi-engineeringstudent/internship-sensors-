int reedPin = 2;
int state;

void setup() {
  pinMode(reedPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  state = digitalRead(reedPin);

  if (state == HIGH) {
    Serial.println("Magnet detected");
  } else {
    Serial.println("No magnet");
  }

  delay(200);
}