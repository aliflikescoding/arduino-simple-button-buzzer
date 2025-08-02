#include <Arduino.h>

// variables here:
bool isConstantOn = false;
bool isModeSwitched = false;
const int buzzerPin = 12;
const int onButtonPin = 2;
const int switchModeButtonPin = 4;

// put function declarations here:

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT);
  pinMode(onButtonPin, INPUT_PULLUP);
  pinMode(switchModeButtonPin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(switchModeButtonPin) == HIGH)
  {
    isModeSwitched = !isModeSwitched; // Toggle
    delay(200);   // Simple debounce
  }

  if (isModeSwitched == false)
  {
    if (digitalRead(onButtonPin) == HIGH) {
      digitalWrite(buzzerPin, HIGH);
    }
    else {
      digitalWrite(buzzerPin, LOW);
    }
  }
  else {
    if (isConstantOn)
    {
      digitalWrite(buzzerPin, HIGH);
    }
    else
    {
      digitalWrite(buzzerPin, LOW);
    }

    if (digitalRead(onButtonPin) == HIGH)
    {
      isConstantOn = !isConstantOn; // Toggle
      delay(200);   // Simple debounce
    }
  }
}

// put function definitions here: