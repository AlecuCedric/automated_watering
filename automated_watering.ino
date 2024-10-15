void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

int moistureSensorPin = 7;  // Pin where D0 is connected
int moistureState = 0;

void setup() {
  pinMode(moistureSensorPin, INPUT);  // Set the D0 pin as input
  Serial.begin(9600);  // Start the serial communication for monitoring
}

void loop() {
  moistureState = digitalRead(moistureSensorPin);  // Read the digital output from D0
  
  if (moistureState == HIGH) {
    Serial.println("Soil is dry");
  } else {
    Serial.println("Soil is wet");
  }
  
  delay(1000);  // Wait for a second before reading again
}
