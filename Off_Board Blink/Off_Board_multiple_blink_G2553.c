#include <msp430.h>
 
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    P1DIR |= (BIT0 + BIT4 + BIT6 + BIT7);    //  configure P1.0 and P1.7 as outputs
    int count1=0;
    int count2=0;
	int count3=0;
	int count4=0;
    
    while(1)
    {
        if(count1 >= 14000)
        {
        P1OUT ^= (BIT0);
        count1=0;
        }
		
		if(count2 >= 22000)
        {
        P1OUT ^= (BIT4);
        count2=0;
        }
		
		if(count3 >= 1700)
        {
        P1OUT ^= (BIT6);
        count3=0;
        }
  
        if(count4 >= 40000)
        {
        P1OUT ^= (BIT7);
        count4=0;
        }

        
        count1++;
        count2++;
		count3++;
		count4++;

    }
}