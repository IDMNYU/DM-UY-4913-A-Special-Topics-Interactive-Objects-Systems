int ledPin = 8;
int switchPin = 4;

// store a state of the button and a previous state to the button
bool current_switchState = LOW;
bool previous_switchState = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // take a current reading of the button
  current_switchState = digitalRead(switchPin);
  Serial.println(current_switchState);
  // if the current reading is different from the previous reading,
  if (current_switchState != previous_switchState) {
    // wait a tiny of of time.
    delay(50);
    // then I want to take a new reading, and store this as my current state
    current_switchState = digitalRead(switchPin);
    // if my previous state was low, and my current state is high, then light the led
    if (previous_switchState == LOW && current_switchState == HIGH) {
      digitalWrite(ledPin, HIGH);
    } // if: compare current + previous  after time

    else {
      digitalWrite(ledPin, LOW);
    }
    // store the previous state
    previous_switchState = current_switchState;
  } // if: current + previous are different

}
