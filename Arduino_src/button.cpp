#include <Arduino.h>

const int pin = 2;

void setup() {
  Serial.begin(9600);
  Serial.println("---Setup---");
  pinMode(pin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(pin) == LOW) {
    Serial.println("Pin connected");
  }
}

