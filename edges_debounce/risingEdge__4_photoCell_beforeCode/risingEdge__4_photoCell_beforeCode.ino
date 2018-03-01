/*
   Capture the rising edge of an event. Want the event to happen once
   not repeatedly
   Also called Edge Detection

*/
int sensorPin = A0;
int sensorValue;
int lastSensorValue; // to hold the old value
int grnLed = 4;
int threshold = 500;


void setup() {
  Serial.begin(9600);
  pinMode(grnLed, OUTPUT);


}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  delay(500);

  if (sensorValue > threshold) {  // if we are above the threshold
    
      blinky(); // do our task
   
  }
 

}


void blinky() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(grnLed, HIGH);
    delay(10);
    digitalWrite(grnLed, LOW);
    delay(20);
    digitalWrite(grnLed, HIGH);
    delay(50);
    digitalWrite(grnLed, LOW);
    delay(100);

  }
}

