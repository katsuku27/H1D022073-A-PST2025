#include <Arduino.h>

int echoPin = D0;
int trigPin = D1;
int ledPin = D4;

// Rumus jarak
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(ledPin,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  duration = pulseIn(echoPin,HIGH);
  distance = duration*0.034/2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance <= 10) {
    digitalWrite(ledPin,HIGH);
  } else {
    digitalWrite(ledPin,LOW);
  }

  delay(1000);
  
}
