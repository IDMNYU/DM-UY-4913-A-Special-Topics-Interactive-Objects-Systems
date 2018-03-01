int sensorPin = A0;
int sensorValue;
int motorSpeed;
int enable = 9;  // PWM pin
int motorPinA = 7;
int motorPinB = 8;

void setup() {
  Serial.begin(9600);
  pinMode(enable, OUTPUT);
  pinMode(motorPinA, OUTPUT);
  pinMode(motorPinB, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  if (sensorValue > 650) {
    motorSpeed = map(sensorValue, 651, 1023, 0, 255);
    forward(motorSpeed);
  }

  if (sensorValue < 350) {
    motorSpeed = map(sensorValue, 0, 349, 0, 255);
    reverse(motorSpeed);
  }

  if (sensorValue > 350 && sensorValue < 650) {
    brake();
  }

}

void forward(int s) {
  digitalWrite(enable, LOW);
  digitalWrite(motorPinA, HIGH);
  digitalWrite(motorPinB, LOW);
  analogWrite(enable, s);

}


void reverse(int s) {
  digitalWrite(enable, LOW);
  digitalWrite(motorPinA, LOW);
  digitalWrite(motorPinB, HIGH);
  analogWrite(enable, s);

}

void brake() {
  digitalWrite(enable, LOW);
  digitalWrite(motorPinA, LOW);
  digitalWrite(motorPinB, LOW);
  digitalWrite(enable, HIGH);

}

