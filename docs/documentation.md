---
title: Documention
description: Work in progress.
---
# Arduino Hardware Package

The following package was sucessfully tested and used to add board support for the ATtiny13a MCU in the Arduino IDE.
```txt
https://mcudude.github.io/MicroCore/package_MCUdude_MicroCore_index.json
```
At the time of writing, library version 2.5.1 was used with the Arduino IDE 2.3.6.

# C++ Code
Copy and paste the following code into the Arduino IDE:
```cpp
#include <Arduino.h>

// Define the pin for the LED
#define LED_PIN 3

// Define the Morse code timing (in milliseconds)
#define DOT_DURATION 200
#define SYMBOL_GAP DOT_DURATION
#define DASH_DURATION (DOT_DURATION * 3)
#define LETTER_GAP (DOT_DURATION * 3)
#define WORD_GAP (DOT_DURATION * 7)

// Predefined constant string to blink in Morse code
const char MESSAGE[] = "HELLO WORLD";

// Function to blink a dot
void blinkDot() {
  digitalWrite(LED_PIN, HIGH);
  delay(DOT_DURATION);
  digitalWrite(LED_PIN, LOW);
  delay(SYMBOL_GAP);
}

// Function to blink a dash
void blinkDash() {
  digitalWrite(LED_PIN, HIGH);
  delay(DASH_DURATION);
  digitalWrite(LED_PIN, LOW);
  delay(SYMBOL_GAP);
}

// Function to blink a character in Morse code
void blinkChar(char c) {
  switch (c) {
    case 'A': blinkDot(); blinkDash(); break;
    case 'B': blinkDash(); blinkDot(); blinkDot(); blinkDot(); break;
    case 'C': blinkDash(); blinkDot(); blinkDash(); blinkDot(); break;
    case 'D': blinkDash(); blinkDot(); blinkDot(); break;
    case 'E': blinkDot(); break;
    case 'F': blinkDot(); blinkDot(); blinkDash(); blinkDot(); break;
    case 'G': blinkDash(); blinkDash(); blinkDot(); break;
    case 'H': blinkDot(); blinkDot(); blinkDot(); blinkDot(); break;
    case 'I': blinkDot(); blinkDot(); break;
    case 'J': blinkDot(); blinkDash(); blinkDash(); blinkDash(); break;
    case 'K': blinkDash(); blinkDot(); blinkDash(); break;
    case 'L': blinkDot(); blinkDash(); blinkDot(); blinkDot(); break;
    case 'M': blinkDash(); blinkDash(); break;
    case 'N': blinkDash(); blinkDot(); break;
    case 'O': blinkDash(); blinkDash(); blinkDash(); break;
    case 'P': blinkDot(); blinkDash(); blinkDash(); blinkDot(); break;
    case 'Q': blinkDash(); blinkDash(); blinkDot(); blinkDash(); break;
    case 'R': blinkDot(); blinkDash(); blinkDot(); break;
    case 'S': blinkDot(); blinkDot(); blinkDot(); break;
    case 'T': blinkDash(); break;
    case 'U': blinkDot(); blinkDot(); blinkDash(); break;
    case 'V': blinkDot(); blinkDot(); blinkDot(); blinkDash(); break;
    case 'W': blinkDot(); blinkDash(); blinkDash(); break;
    case 'X': blinkDash(); blinkDot(); blinkDot(); blinkDash(); break;
    case 'Y': blinkDash(); blinkDot(); blinkDash(); blinkDash(); break;
    case 'Z': blinkDash(); blinkDash(); blinkDot(); blinkDot(); break;
    case ' ': delay(WORD_GAP - LETTER_GAP); break; // Space between words
  }
}

void setup() {
  // Initialize the LED pin as output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Loop through each character in the message
  for (int i = 0; MESSAGE[i] != '\0'; i++) {
    blinkChar(MESSAGE[i]);
    // Add a gap between letters
    if (MESSAGE[i] != ' ' && MESSAGE[i + 1] != '\0') {
      delay(LETTER_GAP - SYMBOL_GAP);
    }
  }
  // Add a gap between repetitions of the message
  delay(WORD_GAP);
}
```

