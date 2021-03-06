/*
Single-Stage Coilgun (Timer-Based)
Michael Lisano
*/

const int coil = 12;
const int trigger = 0;

void setup() {
  Serial.begin(9600);
  pinMode(coil, OUTPUT);
  pinMode(trigger, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(trigger) == LOW){
    digitalWrite(coil, HIGH);
    delay(60); // Can be changed based on voltage or projectile mass
    // 60ms is optimized for 9V launching a 5g projectile.
    digitalWrite(coil, LOW);
    Serial.println("Fire!");
    delay(1000);
  }
}

