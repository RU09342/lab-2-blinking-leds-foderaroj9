#include <msp430.h>
/*
 * Joe Foderaro
 * Lab 2: Simple Blink
 * FR2311
 */
 
int main(void) {
  volatile int i;
 
  WDTCTL = WDTPW | WDTHOLD;             // stop watchdog timer
  P1DIR = 0x01;                         // set up bit 0 of P1 as output
  P1OUT = 0x00;                         // intialize bit 0 of P1 to 0
 
 PM5CTL0 &= ~LOCKLPM5			        // Disable GPIO Power-On Default High-Z mode
 
  for (;;) {
    P1OUT ^= 0x01;                      // Toggle LED
    for (i = 0; i < 0x2000; i++);       // delay
  }
}