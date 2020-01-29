//Hello LCD
//Frank Myhre
//brief description and links to relevant guides or your github repo.
#include <LiquidCrystal.h> //LCD library
 
LiquidCrystal lcd(7, 8, 9, 10, 11, 12); //The pins I used
 
void setup() {
  lcd.begin(16, 2); //The screen is 16x2
  lcd.print("Hello World."); //Message
}
 
void loop() {
  lcd.setCursor(0, 1); //Putting the cursor in the first space
  lcd.print(millis() / 1000); // # of secs (1)
}
