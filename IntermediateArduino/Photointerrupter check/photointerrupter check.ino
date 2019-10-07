#include "Arduino.h"
int ledPin = 10;
int pintPin1 = 2;  //photo interrupter pin 1
int pintPin2 = 3;
int t =0;
int state= 0;

void setup()
{

  	pinMode(pintPin2, INPUT_PULLUP);
  	pinMode(ledPin, OUTPUT);
  	pinMode(pintPin1, INPUT_PULLUP);
  	Serial.begin(9600);
  	attachInterrupt(digitalPinToInterrupt(pintPin2), ledOn, RISING);
  	  	attachInterrupt(digitalPinToInterrupt(pintPin1), ledOff, FALLING);

  }

 void ledOn (){
	digitalWrite(ledPin, HIGH);
	t++;
}
void ledOff(){
	digitalWrite(ledPin, LOW);

}

void loop (){
	
	Serial.println(t);
	delay(100);
}