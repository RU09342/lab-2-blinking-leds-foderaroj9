# Button Blink
The code in this lab is written in C and has the simple function of blinking a light at 50% duty cycle and any desired rate. To accomplish this, for loops and while loops are used in a way that checks whether the button is pressed or not. If it is, the button will blink at the desired rate.

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
G2553: P1.0 and P1.3
5529: P1.0 and P1.1
5594: P1.0 and P5.6
2311: P1.0 and P1.1
6989: P1.0 and P1.1

## Code Functionality
* The general code for every board is the same. The differences include pin numbers for the inputs and outputs, and for the FR boards, High impedance mode must be turned off.
* The board is always checking whether the button is pressed down or not. Onces it sees that it is, the while loop runs and activates the for loops that enable the blinking of the light
