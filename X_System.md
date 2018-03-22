## X System
## Due April 5th

Create an interactive system utilizing what you've learned about inputs (sensors, switches) and outputs (motors, LCD's), and take it to a new level: networks and logging data. This system should be sensing something in it's environment and/or communicating data with another system (another arduino/API/Application/SD Card) which generates some sort of output.

Working with a partner, create an interactive system (referenced above) that does at least 1 of 3 things: communicates over a radio network (XBee: short distances, wireless, mesh networks) or communicates over the internet (Feather, shield to API ex Temboo --> UPS, Instagram, Gmail) or logs data onto memory card. The radio network could be between Arduinos, mesh networks, Arduino to applications/API, etc). The data logging could easily also incorporate networking, if you want to go above and beyond. The internet networking should integrate into API (versus a simple laptop to laptop communication across the network).


* This could be a home automation system

* This could be a wearable for a performance that syncs with Processing, P5.js or Max/MSP/Jitter

* This could be an interface to an application to give a visual or sonic response - an email clock, a digital picture frame that sync's with DropBox or Instagram and changes images based on temperature changes.

It's up to you to creatively design this system with regard to it's behavior and purpose.


Sketch out your ideas, as to the different parts of the system, what each does and what each will require technically. Pseudo code, what needs to happen in each step.

Then build it and test it throughout each step.

Document your process, so as to educate another. Your documentation must be clear enough that they can follow your steps to get their own system communicating across the network. This documentation can take the form of slides, visuals and/or a video. It must be clear. It must be precise.


Follow the guides and resources below to embark upon your process. You will have to research and find supporting links, visuals and information. Document these as well as your own process in your documentation presentation. Prepare a mini presentation to describe your process and the take-aways.


### Requirements

* Appropriate input circuits: pull up/down resistors, properly wired sensors

* Appropriately wired output circuits with appropriate interfaces (Transistors, H-Bridge, Shift Register, Relay, etc)

* Code, commented and with properly control loops and tamed sensors.

* System that communicates properly and regularly with an application, API, arduino, or SD card.

* Well documented directives that can teach another and enable them to get a similiar system up and running. 

* Joint Github Repo between you and your partner where code is pushed regularly.

* Reflective post on each's process blog, including initial sketches, regarding the process with links to the outcome and required documentation.

* Links to Github.

* Schematic renderings of circuit.

* 30 second -  1 minute video of the final system functioning, showing inputs and outputs across a networking.

* Tutorial documentation, showing details, links, code.

* Everything posted to both of your Processing sites


### Stagging/Planning

By each date:

3/22: solder up boards, devise ideas, sketch them out, review links + slides, pseudo code

3/27: Input and output Circuits wired with basic code, review links + slides

3/29: Basic system tested and functioning, new boards are configured and intergration begins

3/30: Further development of your system with regards to data, behaviors, and craft 

*** Extra credit to a team that uses the Maker Space to create a vessel to hold parts of your project. Make sure to include holes for wires, cables, sensors, etc.



### XBee
[SparkFun XBee Sheild Hook-Up Guide](https://learn.sparkfun.com/tutorials/xbee-shield-hookup-guide?_ga=2.85801369.1090691577.1521696092-875585718.1516243677)

[SparkFun XBee WiFi Hook-Up Guide](https://learn.sparkfun.com/tutorials/xbee-wifi-hookup-guide?_ga=2.119486985.1090691577.1521696092-875585718.1516243677)

[SparkFun Exploring XBees and XTCU](https://learn.sparkfun.com/tutorials/exploring-xbees-and-xctu?_ga=2.65420974.1090691577.1521696092-875585718.1516243677)

Exploring Arduino Chapter 11

8 Video tutorials via the Google Doc's Folder Module_11/XBees in Slack/Resources


### WiFi

[Adafruit WINC1500 WiFi Shield Tutorial](https://learn.adafruit.com/adafruit-winc1500-wifi-shield-for-arduino)

[Adafruit Internet of Things Protocol Tutorial](https://learn.adafruit.com/alltheiot-protocols)

[Adafruit Feather WiFi with ATWINC1500 Tutorial](https://learn.adafruit.com/adafruit-feather-m0-wifi-atwinc1500)

Exploring Arduino Chapter 14

7 videos tutorials via the Google Doc's Folder Module_11/IoT/WiFi in Slack/Resources



### Data Logging

[Adafruit Feather 32u4 AdaLogger](https://learn.adafruit.com/adafruit-feather-32u4-adalogger)

[Adafruit Data Logger Shield Tutorial](https://learn.adafruit.com/adafruit-data-logger-shield)

[Adafruit Micro SD Card Breakout Board tutorial](https://learn.adafruit.com/adafruit-micro-sd-breakout-board-card-tutorial)

Exploring Arduino Chapter 13

4 videos tutorials via the Google Doc's Folder Module_11/Data_Logging in Slack/Resources