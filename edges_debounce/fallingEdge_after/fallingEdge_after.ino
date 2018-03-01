/*
   Capture the falling edge of an event. Want the event to happen once
   not repeatedly

*/
int sensorPin = A0;
int sensorValue;
int lastSensorValue; // to hold the old value
int peakValue;
int grnLed = 4;
int threshold = 500;


void setup() {
  Serial.begin(9600);
  pinMode(grnLed, OUTPUT);


}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  delay(50);

  if(sensorValue > threshold){
    if(sensorValue >= lastSensorValue){
      peakValue = sensorValue;
    }
  }
  else if( peakValue >= threshold){
    blinky(); 
    peakValue = 0;
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

