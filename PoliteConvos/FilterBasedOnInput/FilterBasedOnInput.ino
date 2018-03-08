/*
   Based on Tom Igoe's Weighted Average of Input
   https://www.tigoe.com/pcomp/code/arduinowiring/37/

     Analog smoothing using a weighted average filter
  by Tom Igoe

  Based on notes by David Schultz, at

  http://home.earthlink.net/~david.schultz/rnd/2002/KalmanApogee.pdf

  This program reads an analog input and smoothes out the result using a
  weighted average  filter. It works by taking a weighted average of the
  current reading  and the average of the previous readings.

  This example uses a TMP36 temperature sensor on Analog pin 1.  A0 is the
  TMP36's ground, and A2 is its power pin.

  In this example, a second analog reading,
  attached to a trimmer potentiometer, sets the weight.  When the trimmer pot
  is set high, the average is weighted in favor of the current reading, and
  almost no smoothing is done.  When the trimmer pot value is low, the average
  is weighted in favor of the previous readings, and the current reading
  affects the average very little.

  n.b. the variable "lastEstimate" needs to be a global, since it's modified
  each time a new filtering is done.  So if you want to use this for multiple
  inouts, you'll need a "lastEstimate" variable for each input.

  Created 17 October 2005
  Updated 6 Feb 2012

*/

float lastEstimate = 0;      // previous result

void setup() {
  // use pins A0 and A2 to power the TMP36 sensor:
  pinMode(A0, OUTPUT);
  pinMode(A2, OUTPUT);
  // set A0 low, and A2 high:
  digitalWrite(A0, LOW);
  digitalWrite(A2, HIGH);
  Serial.begin(9600);
}

void loop() {
  // read the sensor:
  int sensorVal = analogRead(A1);
  // convert to voltage:
  float voltage = 5.0 * sensorVal / 1024.0;
  // convert to degrees celsius:
  float temperature = (voltage - 0.5) * 100;
  // read the trim pot:
  float trimPotValue = analogRead(A3) / 1023.0;

  // filter the sensor's result:
  float currentEstimate = filter(temperature, trimPotValue, lastEstimate);
  // print the result:
  Serial.println(currentEstimate);
  // save the current result for future use:
  lastEstimate = currentEstimate;
}


// filter the current result using a weighted average filter:
float filter(float rawValue, float weight, float lastValue) {
  // run the filter:
  float result = weight * rawValue + (1.0 - weight) * lastValue;
  // return the result:
  return result;
}

