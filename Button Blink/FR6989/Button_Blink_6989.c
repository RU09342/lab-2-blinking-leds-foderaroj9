#include <msp430.h>
  /*
 * Joe Foderaro
 * Lab 2: Button Blink
 * FR6989
 */ 
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;           // stop watchdog timer
    unsigned int i;
    P1DIR |= 0x01;                      //  configure P1.0 outputs
    P1REN |= (BIT1);                    // enable pull up resistor
    P1OUT |= (BIT1);                    // set pull up resistor
    int count1=0;

    PM5CTL0 &= ~LOCKLPM5;	            //disable default high-z mode
    
    while(1)
    {
         if ((P1IN & BIT1) != BIT1)     //Checks if the button is pressed
        {
            P1OUT^=0x01;                //Toggles the LED
            for (i=50000;i>1;i--);      //Delay
        }
    }
    return 0;
}