int sensorReading;
int sensorPin = A3;
int outputPin = 5;


void setup() {
  Serial.begin(9600);


}


void loop() {
  sensorReading = analogRead(sensorPin); // 0-1023
  Serial.println(sensorReading);
  delay(500);
  int sensorReadingConverted = map(sensorReading, 53, 420, 255, 0);
  Serial.print("output value is: "); Serial.println(sensorReadingConverted);
  analogWrite(outputPin, sensorReadingConverted);
  
}

