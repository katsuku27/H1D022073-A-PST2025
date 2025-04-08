#include <Arduino.h>
#include <Servo.h>

Servo myServo;  // create servo object to control a servo

void setup() {
  myServo.attach(D0);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);  // initialize serial communication at 9600 bps
}

void loop() {
  // put your main code here, to run repeatedly:
  // for (int pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
  //   myServo.write(pos);              // tell servo to go to position in variable 'pos'
  //   delay(10);                       // waits 15ms for the servo to reach the position
  // }

  // for (int pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
  //   myServo.write(pos);              // tell servo to go to position in variable 'pos'
  //   delay(10);                       // waits 15ms for the servo to reach the position
  // }

  myServo.write(90);  // tell servo to go to position 0
  delay(2000);        // waits 1 second
  myServo.write(0);   // tell servo to go to position 90
  delay(2000);        // waits 1 second
  myServo.write(180); // tell servo to go to position 180
  delay(2000);        // waits 1 second
}