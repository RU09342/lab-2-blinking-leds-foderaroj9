#include <msp430.h>
/*
 * Joe Foderaro
 * Lab 2: Multiple Blink
 * FR2311
 */ 
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    P1OUT &= ~BIT0;	            //configure P1.0 as I/O
    P4OUT &= ~BIT7;		        //configure P4.7 as I/O
    P1DIR |= BIT0;      	    //configure P1.0 as output
    P4DIR |= BIT7;		        //configure P4.7 as output
    int count1=0;
    int count2=0;

    
    while(1)
    {
        if(count1 >= 14000)
        {
        P1OUT ^= (BIT0);
        count1=0;
        }
  
        if(count2 >= 40000)
        {
        P4OUT ^= (BIT7);
        count2=0;
        }

        
        count1++;
        count2++;

    }
}