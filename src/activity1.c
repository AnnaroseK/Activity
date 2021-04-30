/*
 */

#include <avr/io.h>
#include <util/delay.h>
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"

int LED()
{
    // Insert code
    port1();
    while(1){
        if(!(PIND & (1<<PD0))&&(!(PIND & (1<<PD4)))){
            PORTB |= (1<<PB0);
            _delay_ms(2000);
            InitADC();
            uint16_t temp;

            while(1){
                temp = ReadADC(0);
                PWM(temp);
                _delay_ms(200);
            }
        }
        else{
            PORTB &= ~(1<<PB0);
            _delay_ms(2000);
        }
    }
    return 0;
}
