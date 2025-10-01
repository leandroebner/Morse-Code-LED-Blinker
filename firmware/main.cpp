// Morse Code LED Blinker Firmware
// Leandro Ebner 2025
#include <Arduino.h>

// Define the pin for the LED
// Use pin 3 for the provided Morse Code LED Blinker circuit board
#define LED_PIN 3

// Define the Morse Code timing (in milliseconds)
#define DOT_DURATION 200
#define SYMBOL_GAP DOT_DURATION
#define DASH_DURATION (DOT_DURATION * 3)
#define LETTER_GAP (DOT_DURATION * 3)
#define WORD_GAP (DOT_DURATION * 7)

// Predefined constant string to display in Morse Code 
// YOU MAY NOT USE LOWERCASE LETTERS OR NUMBERS HERE 
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

// Function to blink a character in Morse Code
void blinkChar(char c) {
  switch (c) {
    case 'A': blinkDot();  blinkDash(); break;
    case 'B': blinkDash(); blinkDot();  blinkDot();  blinkDot();  break;
    case 'C': blinkDash(); blinkDot();  blinkDash(); blinkDot();  break;
    case 'D': blinkDash(); blinkDot();  blinkDot();  break;
    case 'E': blinkDot();  break;
    case 'F': blinkDot();  blinkDot();  blinkDash(); blinkDot();  break;
    case 'G': blinkDash(); blinkDash(); blinkDot();  break;
    case 'H': blinkDot();  blinkDot();  blinkDot();  blinkDot();  break;
    case 'I': blinkDot();  blinkDot();  break;
    case 'J': blinkDot();  blinkDash(); blinkDash(); blinkDash(); break;
    case 'K': blinkDash(); blinkDot();  blinkDash(); break;
    case 'L': blinkDot();  blinkDash(); blinkDot();  blinkDot();  break;
    case 'M': blinkDash(); blinkDash(); break;
    case 'N': blinkDash(); blinkDot();  break;
    case 'O': blinkDash(); blinkDash(); blinkDash(); break;
    case 'P': blinkDot();  blinkDash(); blinkDash(); blinkDot();  break;
    case 'Q': blinkDash(); blinkDash(); blinkDot();  blinkDash(); break;
    case 'R': blinkDot();  blinkDash(); blinkDot();  break;
    case 'S': blinkDot();  blinkDot();  blinkDot();  break;
    case 'T': blinkDash(); break;
    case 'U': blinkDot();  blinkDot();  blinkDash(); break;
    case 'V': blinkDot();  blinkDot();  blinkDot();  blinkDash(); break;
    case 'W': blinkDot();  blinkDash(); blinkDash(); break;
    case 'X': blinkDash(); blinkDot();  blinkDot();  blinkDash(); break;
    case 'Y': blinkDash(); blinkDot();  blinkDash(); blinkDash(); break;
    case 'Z': blinkDash(); blinkDash(); blinkDot();  blinkDot();  break;
    case ' ': delay(WORD_GAP - LETTER_GAP);  break;
  }
}

// Initialize the LED pin as output
void setup() {
  pinMode(LED_PIN, OUTPUT);
}

// Loop through each character in the message and add timings
void loop() {
  for (int i = 0; MESSAGE[i] != '\0'; i++) {
    blinkChar(MESSAGE[i]);
    if (MESSAGE[i] != ' ' && MESSAGE[i + 1] != '\0')
      delay(LETTER_GAP - SYMBOL_GAP);
  }
  delay(WORD_GAP);
}
