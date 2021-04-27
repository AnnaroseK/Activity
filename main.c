/*
 */

#include <avr/io.h>
#include <util/delay.h>
#include "activity1.h"
#include "activity2.h"

int main(void)
{   
    LED.c();
    InitADC();
    uint16_t temp;

    while(1){
        temp = ReadADC(0);
        _delay_ms(200);
    }

    return 0;
}
