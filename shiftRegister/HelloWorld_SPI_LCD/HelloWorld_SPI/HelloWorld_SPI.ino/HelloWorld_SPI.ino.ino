#include <SPI.h>
// include the library code:
#include <LiquidCrystal.h>

/*
  LiquidCrystal Library - Hello World

  Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
  library works with all LCD displays that are compatible with the
  Hitachi HD44780 driver. There are many of them out there, and you
  can usually tell them by the 16-pin interface.

  This sketch prints "Hello World!" to the LCD
  and shows the time.

  The circuit wiring:

  LCD pin 1 : ground
  LCD pin 2 : positive voltage
  LCD pin 3 : middle pin of 10K potentiometer
  LCD pin 4 : Shift Register pin 1
  LCD pin 5 : Ground
  LCD pin 6 : Shift Register pin 3
  LCD pin 7 - 10 : no connection
  LCD pin 11 : Shift Register pin 4
  LCD pin 12 : Shift Register pin 5
  LCD pin 13 : Shift Register pin 6
  LCD pin 14 : Shift Register pin 7
  LCD pin 15 : 330 ohm pull up resistor
  LCD pin 16 : ground

  Shift Register pin 2 : No connection
  Shift Register pin 9 : No connection
  Shift Register pin 10 : positive voltage
  Shift Register pin 11 : Arduino pin 13
  Shift Register pin 12 : Arduino pin 9
  Shift Register pin 13 : ground
  Shift Register pin 14 : Arduino pin 11
  Shift Register pin 15 : no connection
  Shift Register pin 16 : positive voltage
  
  Library originally added 18 Apr 2008
  by David A. Mellis
  library modified 5 Jul 2009
  by Limor Fried (http://www.ladyada.net)
  example added 9 Jul 2009
  by Tom Igoe
  modified 22 Nov 2010
  by Tom Igoe
  modified 12 Feb 2012
  by Juan Hernandez

  modified 3 April 2018
  by Katherine Bennett

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/LiquidCrystal
*/





// initialize the library with the number of the sspin
//(or the latch pin of the 74HC595)
LiquidCrystal lcd(9);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("hello, world!");
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);


}
