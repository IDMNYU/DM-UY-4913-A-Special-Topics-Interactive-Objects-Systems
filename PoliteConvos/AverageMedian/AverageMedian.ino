/*
  Analog median and average
 by Tom Igoe

 This program reads an analog input and gives the average of 9 readings,
 and sorts the list of readings and delivers the median number.

 Created 17 October 2005
 Updated 7 August 2007

 */
int numReadings = 9; // number of samples to take
int median = 0;      // median of the sorted samples
int readingNumber;   // counter for the sample array

// variables for subroutines:
byte i = 0;
byte j = 0;
byte position = 0;
int analogValues[9]; 

//function prototypes:
void bubbleSort();
int  averageArray();

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(500);
  for (readingNumber = 0; readingNumber < numReadings; readingNumber++) {
    //get the reading:
    analogValues[readingNumber] = analogRead(0);

  }
  // sort the array using a bubble sort:
  bubbleSort();

  // get the middle element:
  median = analogValues[numReadings / 2]; 

  // print the results:
  // print the array, nicely ASCII-formatted:
  Serial.print("Array: [");
  for (j = 0; j < numReadings; j++) {
    Serial.print(analogValues[j], DEC);
    Serial.print (", ");
  }
  Serial.print("]\r\n");
  // average the array:
  Serial.print(" Average = ");
  Serial.print(averageArray(), DEC);
  Serial.print("\tMedian = ");
  Serial.print(median, DEC);
  Serial.print("\r\n");
}

// average the values in the array:
int  averageArray() {
  int total = 0;
  int average = 0;
  for (i = 0; i< numReadings; i++) {
    total = total + analogValues[i];
  }
  average = total/(numReadings + 1);
  return average;
}

void bubbleSort() {
  int out, in, swapper;
  for(out=0 ; out < numReadings; out++) {  // outer loop
    for(in=out; in<(numReadings-1); in++)  {  // inner loop
      if( analogValues[in] > analogValues[in+1] ) {   // out of order?
        // swap them:
        swapper = analogValues[in];
        analogValues [in] = analogValues[in+1];
        analogValues[in+1] = swapper;
      }
    }
  }
}
