#include <msp430.h>
 /*
 * Joe Foderaro
 * Lab 2: multiple Blink
 * FR6989
 */
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    P1OUT &= ~BIT0;	            //configure P1.0 as I/O
    P9OUT &= ~BIT7;		        //configure P2.0 as I/O
    P1DIR |= BIT0;      	    //configure P1.0 as output
    P9DIR |= BIT7;		        //configure P2.0 as output
    int count1=0;
    int count2=0;

    PM5CTL0 &= ~LOCKLPM5;       //Disable GPIO default high-z mode
    
    while(1)
    {
        if(count1 >= 14000)
        {
        P1OUT ^= (BIT0);
        count1=0;
        }
  
        if(count2 >= 40000)
        {
        P9OUT ^= (BIT7);
        count2=0;
        }

        
        count1++;
        count2++;

    }
}