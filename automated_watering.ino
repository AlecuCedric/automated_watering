#include <LiquidCrystal_I2C.h>
//#include "pitches.h"
//#include "plant_face.h"

//LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display
int moistureSensorPin = 14;  // Pin where D0 is connected
const int relayPin = 4;
int moistureState = 0;
// notes in the melody:
// int melody[] = {
//   NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
// };

// note durations: 4 = quarter note, 8 = eighth note, etc.:
// int noteDurations[] = {
//   4, 8, 8, 4, 4, 4, 4, 4
// };
// const int ledPin1 = 9;  //red led indicating Dry soil
// const int ledPin2 = 10; //green led indicating Wet soil

// void playTone() {
//   // iterate over the notes of the melody:
//   for (int thisNote = 0; thisNote < 8; thisNote++) {

//     // to calculate the note duration, take one second divided by the note type.
//     //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
//     int noteDuration = 1000 / noteDurations[thisNote];
//     tone(8, melody[thisNote], noteDuration);

//     // to distinguish the notes, set a minimum time between them.
//     // the note's duration + 30% seems to work well:
//     int pauseBetweenNotes = noteDuration * 1.30;
//     delay(pauseBetweenNotes);
//     // stop the tone playing:
//     noTone(8);
//   }
// }

void setup() {
  // put your setup code here, to run once:
  // initialize the LED pins as an output:
  //pinMode(ledPin1, OUTPUT);
  //pinMode(ledPin2, OUTPUT);
  //LCD
  //lcd.init();         // initialize the lcd
  //lcd.backlight();    // Turn on the LCD screen backlight
  //moisture sensor
  pinMode(moistureSensorPin, INPUT);  // Set the A0 pin as input
  pinMode(relayPin, OUTPUT);
  Serial.begin(9600);  // Start the serial communication for monitoring
}

void loop() {
  // put your main code here, to run repeatedly:
  moistureState = digitalRead(moistureSensorPin);  // Read the digital output from D0
  //lcd.setCursor(0, 0);

  if (moistureState == HIGH) {
    Serial.print("Soil is dry");
    digitalWrite(relayPin, HIGH);
    //digitalWrite(ledPin2, HIGH);
    //digitalWrite(ledPin1, LOW);
    //playTone();
  } else {
    Serial.print("Soil is wet");
    digitalWrite(relayPin, LOW);
    //digitalWrite(ledPin2, LOW);
    //digitalWrite(ledPin1, HIGH);
  }
  delay(1000);  // Wait for 1 seconds before reading again
}