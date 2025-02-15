// Sense Think Act in Tinkercad ,
// led brightness changes according to changes in
// potentiometer values


// Define LED pin
#define LED_PIN 13 

void setup() {
  // Initialize serial communication 
  Serial.begin(9600);
  // Configure LED pin as output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  //  Read the analog value from the potentiometer (sensor)
  
  int sensorValue = analogRead(A0); 
  
  // Print sensor value to serial monitor 
  Serial.print("Varible resitance provided: ");
  Serial.println(sensorValue);

  // Determine LED brightness based on sensor value
  // Map the sensor value (0-1023) to LED brightness range (0-255)
  int ledBrightness = map(sensorValue, 0, 1023, 0, 255);
  
  // Control LED brightness using PWM 
  analogWrite(LED_PIN, ledBrightness);
  
   // Print sensor value to serial monitor 
  Serial.print("LED brightness: ");
  Serial.println(ledBrightness);
  
  
  // Small delay
  delay(500);
}
