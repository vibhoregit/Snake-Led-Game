#include <msp430.h>
#define SDI1 BIT0//SERIAL DATA IN NEGATIVE
#define CLK1 BIT1//CLOCK NEGATIVE
#define LAH1 BIT2// NEGATIVE


void main(void)
{   P1DIR |= (SDI1+CLK1+LAH1);
    P1OUT &= ~(SDI1+CLK1+LAH1);
    WDTCTL = WDTPW | WDTHOLD;// stop watchdog timer
    P1OUT &=~BIT0;
    P1OUT |=CLK1;
    P1OUT &=~CLK1;

    P1OUT |=LAH1;
    P1OUT &=~LAH1;

    int i=0;
    for(i=47;i>0;i--)
        {P1OUT &=~BIT0;
        P1OUT |=CLK1;
        P1OUT &=~CLK1;

        P1OUT |=LAH1;
        P1OUT &=~LAH1;
        }
    while(1)
    {
    P1OUT |=BIT0;

    P1OUT |=CLK1;
    P1OUT &=~CLK1;

    P1OUT |=LAH1;
    P1OUT &=~LAH1;
    P1OUT &=~BIT0;

    int i=0;
    for(i=47;i>0;i--)
        {P1OUT &=~BIT0;
        P1OUT |=CLK1;
        P1OUT &=~CLK1;

        P1OUT |=LAH1;
        P1OUT &=~LAH1;


    __delay_cycles(65000);
    __delay_cycles(65000);
    __delay_cycles(65000);
    __delay_cycles(65000);
    __delay_cycles(65000);
    __delay_cycles(65000);
    __delay_cycles(65000);
    __delay_cycles(65000);
    __delay_cycles(65000);
    __delay_cycles(65000);
        }
    }
}

