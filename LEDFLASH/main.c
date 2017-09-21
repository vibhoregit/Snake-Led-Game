#include <msp430.h>
#define SDI1 BIT0//SERIAL DATA IN NEGATIVE
#define CLK1 BIT1//CLOCK NEGATIVE
#define LAH1 BIT2// NEGATIVE
#define SDI2 BIT3//POSITIVE
#define CLK2 BIT4//POSITIVE
#define LAH2 BIT5//POSITIVE


void main(void)
{   P1DIR |= (SDI1+CLK1+LAH1);
    P1OUT &= ~(SDI1+CLK1+LAH1);
    WDTCTL = WDTPW | WDTHOLD;// stop watchdog timer
    while(1)
    {
    P1OUT |=BIT0;
    P1OUT |=CLK1;
    P1OUT &=~CLK1;
    P1OUT ^=LAH1;
    P1OUT ^=LAH1;
    P1OUT &=(~BIT0);
    int c = 0,i=0;
    for(c=100000;c>0;c--){
    }
    for(i=47;i>0;i--){
        P1OUT ^=CLK1;
        P1OUT ^=CLK1;
        P1OUT ^=LAH1;
        P1OUT ^=LAH1;
        for(c=100000000000;c>0;c--){

        }
    }
    }
}

