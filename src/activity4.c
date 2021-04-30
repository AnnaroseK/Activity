#include <avr/io.h>
#include<util/delay.h>
#include "activity4.h"
int USART(int n)
{   USARTInit(103);
    //char data;
    DDRB |= (1<<PB1);
    if(n>=0 && n<=200){
        USARTWriteChar('20');
    }
    else if(n>=210 && n<=500){
        USARTWriteChar('25');
    }
    else if(n>=510 && n<=700){
        USARTWriteChar('29');
    }
    else{
        USARTWriteChar('33');
    }
    return 0;
}
