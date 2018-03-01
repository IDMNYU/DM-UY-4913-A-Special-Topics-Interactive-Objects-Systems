int ledPin = 8;
int switchPin = 4;

bool current_switchState;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT);


}

void loop() {
  // take a current reading of the button
  current_switchState = digitalRead(switchPin);  // use 2 wires as a switch, to be able to see this more clearly
  Serial.println(current_switchState);
  delay(250);

  if(current_switchState == HIGH){
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
