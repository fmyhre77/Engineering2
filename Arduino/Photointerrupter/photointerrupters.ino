int ledPin = 10;
int interruptPin = 2;
int state = LOW;
int counter = 0;
 
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(0, blink, RISING);
  attachInterrupt(1, off, FALLING);
  Serial.begin(9600);
}
 
void loop() {
  digitalWrite(ledPin, state);
  Serial.print("counter is: ");
  Serial.println(counter);
}
 
void blink() {
  state = !state;
  counter++;
  digitalWrite(ledPin, HIGH);
}
 
void off() {
  state = !state;
  digitalWrite(ledPin, LOW);
 }