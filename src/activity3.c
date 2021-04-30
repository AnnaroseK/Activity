
#include "activity1.h"
#include "activity4.h"

void PWM(int n){
    //port();
    OCR0A=n;
    USART(n);
}
