// an array to hold the values taken in
int list[13];
int numReadings = 13;
int median;
int index = 0;
int sensorPin = 0;
int sensorReading = 0;
int total = 0;
int regAverage = 0;

//create an array to hold the deviations for each value from average
int deviationList[13];

void setup() {
  Serial.begin(9600);
  // initialize all the readings to 0:
  for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    list[thisReading] = 0;
  }

}

void loop() {
  delay(500);
  for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    list[thisReading] = analogRead(0);
  }

  Serial.print("Array: [");
  for (byte j = 0; j < numReadings; j++) {
    Serial.print(list[j], DEC);
    Serial.print (", ");
  }
  Serial.print("]\r\n");

  //average of all values
  regAverage = total / numReadings;
  Serial.print("reg average is: ");
  Serial.println(regAverage);

  bubbleSort();
  deviation();

  //average without high's and low's
  int averageNum = average();
  Serial.print("trimmed average is: ");
  Serial.println(averageNum);

  Serial.print("median is: ");
  median = list[7]; //3
  Serial.println(median);

}

void deviation() {
  int averageDeviation = 0;

  //calculate those deviations
  for (int i = 0; i < numReadings; i++) {
    deviationList[i] = list[i] - regAverage;
    //calculate the average deviation
    averageDeviation += deviationList[i];
  }

  // discard any that have too large of a deviation
  for (int i = 0; i < numReadings; i++) {
    if (deviationList[i] > (2 * averageDeviation)) {
      //get rid of that value is there is too great a deviation from the average
      list[i] = 0;
    }
  }

}

void bubbleSort() {
  int out, in, swapper;
  for (out = 0 ; out < numReadings; out++) { // outer loop
    for (in = out; in < numReadings; in++)  { // inner loop
      if ( list[in] > list[in + 1] ) { // out of order?
        // swap them:
        swapper = list[in];
        list[in] = list[in + 1];
        list[in + 1] = swapper;
      }
    }
  }
}

int average() {
  int trim_average = 0;
  for (int i = 2; i < (numReadings - 3); i++) {
    trim_average += list[i];
  }
  return trim_average;

}



