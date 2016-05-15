## Overview 
The goal of this project is to safely toggle external mains relays via serial commands.
This is achieved by simple expendable Arduino code and a simple Python script issue commands over serial to the Arduino.

### Arduino 
I used an Arduino nano clone. However any Arduino board should fit fine.
You can switch as many relays as you have digital pins on the Arduino board

### Python
A simple script that takes the first command line argument as the number of the relay to switch.
It then sends that command to the Arduino.
Can also be easily extended. 

### Misc hardware
* 3.3v relays
* Diode 
* Transistor
* Cheep AC mains remote control

Basic idea is to be able to simulate the button press on the AC mains relay device.
I ripped mine apart and solder wires to the switch points.
This is then feed into a another relay. This relay is attached to the Arduino directly. (Driven by the transistor)
This allows us to switch the AC mains relay with a fair amount of safety to us and the Arduino.
