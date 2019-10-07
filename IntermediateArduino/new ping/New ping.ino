#include <NewPing.h>
 
#define TRIGGER_PIN  12
#define ECHO_PIN     11
#define MAX_DISTANCE 20000
int led = 3;
int ledbrightness = 0;
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
 
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
 
void loop() {
  delay(50);
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm());
  Serial.println("cm");
  ledbrightness = 10 * sonar.ping_cm();
  analogWrite(led, ledbrightness);
}