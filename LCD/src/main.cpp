#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int SDA_pin = D1; 
int SCL_pin = D3; 

LiquidCrystal_I2C lcd(0x27, 16, 2); 

void setup() {
  Wire.begin(SDA_pin, SCL_pin);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("123456789101112");
  lcd.setCursor(0, 1);
  lcd.print("hehehhe");
}

void loop() {
  // Your main loop code
}
