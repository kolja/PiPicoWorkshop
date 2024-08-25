#include <Arduino.h>

const int led = 12;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
}

void loop() {
  digitalWrite(led, HIGH);
  // for non-blocking delay:
  // unsigned long currentMillis = millis();
  delay(100);
  digitalWrite(led, LOW);
  delay(300);
}

