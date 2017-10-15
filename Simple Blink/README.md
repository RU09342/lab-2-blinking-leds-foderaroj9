# Simple Blink
The code in this lab is written in C and has the simple function of blinking a single light at 50% duty cycle at any desired rate. To accomplish this, a counter is used to count at a certain rate.

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
G2553: P1.0
5529: P1.0
5594: P1.0
2311: P1.0
6989: P1.0

## Code Functionality
* The general code for every board is the same. The differences include: for the FR boards, High impedance mode must be turned off.
* To achieve a single blink, a counter is used, set at a specific rate, and an LED is set as an output. A for loop is then used to blink the LED at the desired rate