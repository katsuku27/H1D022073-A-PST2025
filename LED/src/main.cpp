#include <Arduino.h>

int kumning1 = D0;
int kumning2 = D2;
int Memrah1 = D4;

void setup() {
  // put your setup code here, to run once:

  pinMode(kumning1, OUTPUT);
  pinMode(kumning2, OUTPUT);
  pinMode(Memrah1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Memrah1, HIGH);
  delay(5000);
  digitalWrite(Memrah1, LOW);
  digitalWrite(kumning1, HIGH);
  delay(5000);
  digitalWrite(kumning1, LOW);
  digitalWrite(kumning2, HIGH);
  delay(5000);
  digitalWrite(kumning2, LOW);
}