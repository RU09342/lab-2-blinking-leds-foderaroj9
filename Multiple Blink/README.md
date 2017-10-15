# Multiple Blink
The code in this lab is written in C and has the simple function of blinking multiple lights at 50% duty cycle and any desired rate. To accomplish this, counters are used to count at certain rates. They can be changed and the LED will blink at the desired rates.

# The following boards are used in this lab:
* MSP430G2553
* MSP430F5529
* MSP430FR2311
* MSP430FR5994
* MSP430FR6989

## Dependencies
The dependencies for this lab is the MSP430.h library that is included when you build a new project in code composer

## Outputs:
The outputs used for this are the LEDs on each board. 
G2553: P1.0 and P1.6
5529: P1.0 and P4.7
5594: P1.0 and P1.1
2311: P1.0 and P2.0
6989: P1.0 and P9.7

## Code Functionality
* The general code for every board is the same. The differences include pin numbers for the inputs and outputs, and for the FR boards, High impedance mode must be turned off.
* To achieve multiple blinks as opposed to a single blink, multiple counters are used, set at different rates, and multiple LEDs are initialized and set as outputs.