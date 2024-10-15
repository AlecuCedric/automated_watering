#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display
int moistureSensorPin = 0;  // Pin where D0 is connected
int moistureState = 0;

void setup() {
  // put your setup code here, to run once:
  //LCD
  lcd.init();         // initialize the lcd
  lcd.backlight();    // Turn on the LCD screen backlight
  //moisture sensor
  pinMode(moistureSensorPin, INPUT);  // Set the D0 pin as input
  Serial.begin(9600);  // Start the serial communication for monitoring
}

void loop() {
  // put your main code here, to run repeatedly:
  moistureState = digitalRead(moistureSensorPin);  // Read the digital output from D0
  lcd.setCursor(0, 0);

  if (moistureState == HIGH) {
    lcd.print("Soil is dry");
  } else {
    lcd.print("Soil is wet");
  }
  
  delay(1000);  // Wait for a second before reading again
}