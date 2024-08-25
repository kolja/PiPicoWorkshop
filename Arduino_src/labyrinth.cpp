#include <Arduino.h>

const int pins[] = {2, 3, 4, 5, 6, 7};
const int leds[] = {10, 11, 12};
const int buzzer = 17;

const int numPins = sizeof(pins) / sizeof(pins[0]);
const int numLEDs = sizeof(leds) / sizeof(leds[0]);

const int maxSequenceSize = 50;
int sequence[maxSequenceSize];
int sequenceIndex = 0;
int currentPin = 0;
int lastPin = -1;
int number = -1; // a random number

bool isLow = false;

const char* paths[8] = {
  "34",
  "6",
  "34",
  "34", // oder "6"
  "34",
  "54",
  "34",
  "54"
};

void setup() {

  Serial.begin(9600);
  randomSeed(analogRead(0));

  for (int i = 0; i < numLEDs; ++i) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
  
  for (int i = 0; i < numPins; i++) {
    pinMode(pins[i], INPUT_PULLUP);
  }

  pinMode(buzzer, OUTPUT);
  digitalWrite(buzzer, LOW);

  Serial.println("---Finished-Setup---");
}

void loop() {
  for (int i = 0; i < numPins; i++) {

    currentPin = pins[i];
    isLow = digitalRead(currentPin) == LOW;

    if (isLow && currentPin != lastPin) {
      Serial.print("Pin: ");
      Serial.println(currentPin);

      if (currentPin == 2) {
        beep(300, 0);
        LEDStateChange();
        number = random(0,8);
        updateLEDs(number);
        beep(50, 0);
        sequenceIndex = 0;
      }

      if (currentPin > 2 && currentPin < 7 && sequenceIndex < maxSequenceSize) {
        beep(50, 50);
        beep(50, 0);
        sequence[sequenceIndex++] = currentPin;
      }

      if (currentPin == 7) {
        if (isCorrectPath(number, sequence, sequenceIndex)) {
          beep(100, 100);
          beep(50, 50);
          beep(50, 50);
          beep(400, 0);
        } else {
          beep(600, 0);
        }
      }
      
      lastPin = currentPin;
    }
  }
}

void beep(int time, int pause) {
  digitalWrite(buzzer, HIGH);
  delay(time);
  digitalWrite(buzzer, LOW);
  delay(pause);
}

void LEDStateChange() {
  for (int repeat = 15; repeat > 0; --repeat) {
    for (int i = 0; i < numLEDs; ++i) {
      digitalWrite(leds[i], (repeat + i) % numLEDs == 0 ? HIGH : LOW);
    }
    delay(200);
  }
}

// the bit pattern of number determines if the LED is on (1) or off (0) 
void updateLEDs(int number) {
  for (int i = 0; i < numLEDs; ++i) {
    bool isOn = (number & (1 << i));
    digitalWrite(leds[i], isOn);
  }
}

bool isCorrectPath(int number, int* sequence, int sequenceLength) {

  String stringSequence = "";
  for (int i = 0; i < sequenceLength; ++i) {
    stringSequence += String(sequence[i]);
  }

  return stringSequence == String(paths[number]);
}
