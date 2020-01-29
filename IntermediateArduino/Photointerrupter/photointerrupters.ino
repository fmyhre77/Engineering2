//Photointerrupters
//Frank Myhre
//Use a T-Slot photointerrupter to detect if the pathway is blocked by making a light flash
int ledPin = 10; //LED pin
int interruptPin = 2; //Photointerrupter pin
int state = LOW;
int counter = 0;
 
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP); //pulling up pin
  attachInterrupt(0, blink, RISING);
  attachInterrupt(1, off, FALLING);
  Serial.begin(9600);
}
 
void loop() {
  digitalWrite(ledPin, state);
  Serial.print("counter is: "); //print counter for how many times the light went off
  Serial.println(counter);//printing counter
}
 
void blink() {
  state = !state;
  counter++;//adding to counter value
  digitalWrite(ledPin, HIGH);
}
 
void off() {
  state = !state;
  digitalWrite(ledPin, LOW); // turns off LED
 }
