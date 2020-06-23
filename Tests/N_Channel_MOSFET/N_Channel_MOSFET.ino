/*
Test of Switching current with N-channel mosfet
*/
const int switchMe = 12;

void setup() {
  pinMode(switchMe, OUTPUT);
}

void loop() {
  digitalWrite(switchMe, HIGH);
  delay(1000);
  digitalWrite(switchMe, LOW);
  delay(1000);
}
