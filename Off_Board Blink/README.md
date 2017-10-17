# Multiple Blink Off Board *** EXTRA WORK IS MULTIPLE LEDS AT DIFFERENT RATES AS OPPOSED TO A SINGLE***
The code in this lab is written in C and has the simple function of blinking multiple lights at 50% duty cycle and any desired rate. To accomplish this, counters are used to count at certain rates. They can be changed and the LED will blink at the desired rates. The difference this time is that we take the chip off of the G2553 launchpad and wire it up on a breadboard to achieve its functionality.

# The following boards are used in this lab:
* MSP430G2553

## Dependencies
The dependencies for this lab is the MSP430.h library that is included when you build a new project in code composer

## Outputs:
The outputs used for this are the LEDs on each board. 
G2553: P1.0, P1.4, P1.6 and P1.7

## Code Functionality
* To achieve multiple blinks as opposed to a single blink, multiple counters are used, set at different rates, and multiple LEDs are initialized and set as outputs.
* Gif of working off board circuit included in same folder as this readme