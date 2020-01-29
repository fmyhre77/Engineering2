//LCD Backpack
//Frank Myhre
//Using a LCD screen and backpack to count how many times a button is pressed
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h> //library
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7); //the pins I used
const int switchPin = 9;
static int hits = 0;
int switchState = 0; //beginning switchstate
int prevSwitchState = 0;
void setup()
{
	lcd.begin(16, 2); // for 16 x 2 LCD module
	lcd.setBacklightPin(3, POSITIVE); //turns on screen
	lcd.setBacklight(HIGH);
	pinMode(switchPin, INPUT);
	lcd.clear();
	lcd.setCursor(0, 0);
	lcd.print("Hit the button");
	lcd.setCursor(0, 1);
	lcd.print("to increment");
}

void loop()
{
	// check the status of the switch
	switchState = digitalRead(switchPin);
	// compare the switchState to its previous state
	if (switchState != prevSwitchState)
	{
		if (switchState == LOW)
		{
			hits = hits + 1; //adding to counter
			lcd.clear();
			lcd.setCursor(0, 0);
			lcd.print("hello world"); // adding message
			lcd.setCursor(0, 1);
			delay(50);
			lcd.print(hits);
		}
	}
	// save the current switch state as the last state
	prevSwitchState = switchState;
}
