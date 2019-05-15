#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRA = 0b11111111;
    PORTA = 0b11111111;
    for(int i=0;i<8;i++){
        PORTA <<= 1;
        _delay_ms(1000);
    }
    for(int i=0;i<8;i++){
        PORTA>>=1;
        _delay_ms(1000);
        PORTA = PORTA | 1;
    }
}