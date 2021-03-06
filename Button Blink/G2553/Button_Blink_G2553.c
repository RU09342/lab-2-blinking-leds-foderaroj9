#include <msp430.h>
 
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;           // stop watchdog timer
    unsigned int i;
    P1DIR |= 0x01;                      //  configure P1.0 outputs
    P1REN |= (BIT3);                    // enable pull up resistor
    P1OUT |= (BIT3);                    // set pull up resistor
    int count1=0;

    
    while(1)
    {
         if ((P1IN & BIT3) != BIT3)     //Checks if the button is pressed
        {
            P1OUT^=0x01;                //Toggles the LED
            for (i=50000;i>1;i--);      //Delay
        }
    }
    return 0;
}