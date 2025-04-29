#include <Arduino.h>
#include <Servo.h>

Servo myServo;  // create servo object to control a servo

void setup() {
  myServo.attach(D0);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);  // initialize serial communication at 9600 bps
}

void loop() {
  myServo.write(90);  // tell servo to go to position 0
  delay(2000);        // waits 1 second
  myServo.write(0);   // tell servo to go to position 90
  delay(2000);        // waits 1 second
  myServo.write(180); // tell servo to go to position 180
  delay(2000);        // waits 1 second
}