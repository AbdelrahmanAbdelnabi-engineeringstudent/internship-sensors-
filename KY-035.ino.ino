int hallPin = A0;
int value;


void setup() {
Serial.begin(9600);
}


void loop() {
value = analogRead(hallPin);


Serial.print("Hall sensor value: ");
Serial.println(value);


delay(200);
}