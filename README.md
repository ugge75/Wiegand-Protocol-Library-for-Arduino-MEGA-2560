# Wiegand 26 and Wiegand 34 library for Arduino


The Wiegand interface is a de facto standard commonly used to connect a card reader or keypad to an electronic entry system. Wiegand interface has the ability to transmit signal over long distance with a simple 3 wires connection. This library uses interrupt pins from Arduino to read the pulses from Wiegand interface and return the code and type of the Wiegand.

## Requirements

The following are needed

Arduino Mega 2560 Any compatible board should work.

Wiegand RFID Reader.

Reader 1 :

DATA0 of Wiegand connects to Arduino PIN 2 
DATA1 of Wiegand connects to Arduino PIN 3

Reader 2 :
DATA0 of Wiegand connects to Arduino PIN 21 
DATA1 of Wiegand connects to Arduino PIN 20

Reader 3 :
DATA0 of Wiegand connects to Arduino PIN 19 
DATA1 of Wiegand connects to Arduino PIN 18

Installation Follow the instruction for library installation in Arduino.cc web site.



Library come from original library developed from http://www.monkeyboard.org

original library can download from :

https://github.com/monkeyboard/Wiegand-Protocol-Library-for-Arduino



Modified form : Francesco Uggetti ( ugge75 )

*This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation; either version 2.1 of the License, or (at your option) any later version.*

*This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.*