/*
Coilgun Design with IR-Optical-Sensor-based switching
*/

int threshold = 200;

const int coil1 = 12;
const int coil2 = 11;
const int coil3 = 10;

//----------------INPUT DEVICES---------------
const int sensor1 = A0;
const int sensor2 = A1;
const int sensor3 = A2;
const int sensor1State;
const int sensor2State;
const int sensor3State;
const int trigger = 0;

//================================

void setup(){
  pinMode(coil1, OUTPUT);
  pinMode(coil2, OUTPUT);
  pinMode(coil3, OUTPUT);
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(trigger, INPUT_PULLUP);
}

void loop(){
  if (digitalRead(trigger) == LOW){
    digitalWrite(coil1, HIGH);
    digitalWrite(coil2, HIGH);
    digitalWrite(coil3, HIGH);
  }
  if(analogRead(sensor1) < threshold){
      digitalWrite(coil1, LOW);
      if (analogRead(sensor2) < threshold){        
        digitalWrite(coil2, LOW);
        if (analogRead(sensor3) < threshold){
          digitalWrite(coil3, LOW);
        }
      }
    }
}
