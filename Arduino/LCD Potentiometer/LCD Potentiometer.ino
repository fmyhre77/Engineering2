#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7);
 
int ledPin = 11;
int potPin = A2;
int brightness = 0;
int val = 0;
 
void setup () {
  lcd.begin (16,2); 
  lcd.setBacklightPin(3,POSITIVE);
  lcd.setBacklight(HIGH);
  pinMode(ledPin, OUTPUT);
  pinMode(potPin, INPUT);	
  lcd.setCursor(0, 0);
  lcd.print("Brightness: ");
}
 
void loop () {
  val = analogRead(potPin);
  brightness = map(val, 0, 1023, 0, 255);
  analogWrite(ledPin, brightness);
  brightness= map(brightness, 0, 1023, 0, 410);
  lcd.setCursor(0, 1);  
  lcd.print(brightness);
  lcd.print(" ");
  lcd.setCursor(3, 1);
  lcd.print("/100");
  lcd.print(" ");
}