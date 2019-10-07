#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7);
const int switchPin = 9;
static int hits = 0;
int switchState = 0;
int prevSwitchState = 0;
void setup()
{
	lcd.begin(16, 2); // for 16 x 2 LCD module
	lcd.setBacklightPin(3, POSITIVE);
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
			hits = hits + 1;
			lcd.clear();
			lcd.setCursor(0, 0);
			lcd.print("hello world");
			lcd.setCursor(0, 1);
			delay(50);
			lcd.print(hits);
		}
	}
	// save the current switch state as the last state
	prevSwitchState = switchState;
}
