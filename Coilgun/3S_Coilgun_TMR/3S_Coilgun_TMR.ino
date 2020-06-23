/*
Timer-based Coilgun design
*/

int COIL1 = 12;
int COIL2 = 11;
int COIL3 = 10;
int TRIGGER = 0;

int DELAY_PERIOD = 50;

void setup() {
  pinMode(COIL1, OUTPUT);
  pinMode(COIL2, OUTPUT);
  pinMode(COIL3, OUTPUT);
  pinMode(TRIGGER, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(TRIGGER) == LOW){
    digitalWrite(COIL1, HIGH);
    delay(DELAY_PERIOD); // propulsion period
    digitalWrite(COIL1, LOW);
    digitalWrite(COIL2, HIGH);
    delay(DELAY_PERIOD); // propulsion period
    digitalWrite(COIL2, LOW);
    digitalWrite(COIL3, HIGH);
    delay(DELAY_PERIOD); // propulsion period
    digitalWrite(COIL3, LOW);
  }
}

