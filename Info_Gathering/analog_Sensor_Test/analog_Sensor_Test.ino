/*
Reads the input of analog input devices on the A0 pin
*/

const int inPin = A0;

void setup() {
  pinMode(inPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(inPin));
  delay(200);
}
