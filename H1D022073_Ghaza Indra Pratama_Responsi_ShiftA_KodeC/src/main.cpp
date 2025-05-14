  #include <Arduino.h>
  #include <Wire.h>
  #include <LiquidCrystal_I2C.h>

  int SDA_pin = D0; 
  int SCL_pin = D3; 
  int echoPin = D4;
  int trigPin = D1;

  long duration;
  int distance;
  
  LiquidCrystal_I2C lcd(0x27, 16, 2);

  void setup() {
    pinMode(echoPin, INPUT);
    pinMode(trigPin, OUTPUT);

    Wire.begin(SDA_pin, SCL_pin);
    lcd.init();
    lcd.backlight();

    Serial.begin(9600);
  }

  void loop() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(5);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);

    distance = duration * 0.034 / 2;

    if (distance < 0) {
      distance = 0;
    }

    lcd.clear();
    lcd.backlight();
    lcd.setCursor(0, 0);
    if (distance <= 100) {
      lcd.print("Area Berbahaya");
      lcd.setCursor(0, 1);
      lcd.print("Jarak: ");
      lcd.print(distance);
    } else {
      lcd.print("AMAN");
      lcd.setCursor(0, 1);  
      lcd.print("Jarak: ");
      lcd.print(distance);
    }

    delay(1000);
  }
