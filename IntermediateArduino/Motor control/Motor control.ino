#include "Arduino.h"

int potPin = 3;
int traPin = 11; 
int t = 0;
    
void setup()
{
  	pinMode(potPin, INPUT);
  	pinMode(traPin, OUTPUT);
  	Serial.begin(9600);} 
  
void loop()
{
	t = (analogRead(potPin))/4;
	analogWrite(traPin, t);  
	delay(200);
	Serial.println(t);
} 