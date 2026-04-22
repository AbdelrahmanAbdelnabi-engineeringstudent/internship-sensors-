int buttonPin = 2;
int state;

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  state = digitalRead(buttonPin);

  if (state == LOW) {
    Serial.println("Button pressed");
  } else {
    Serial.println("Button not pressed");
  }

  delay(200);
}