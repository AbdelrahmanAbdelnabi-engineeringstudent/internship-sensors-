int trigPin = 9;
int echoPin = 10;


long duration;
float distance_cm;


void setup() {
Serial.begin(9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
}


void loop() {
// Send pulse
digitalWrite(trigPin, LOW);
delayMicroseconds(2);


digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);


// Read echo time
duration = pulseIn(echoPin, HIGH);


// Convert time to distance (cm)
distance_cm = duration * 0.034 / 2;


Serial.print("Distance: ");
Serial.print(distance_cm);
Serial.println(" cm");


delay(300);
}