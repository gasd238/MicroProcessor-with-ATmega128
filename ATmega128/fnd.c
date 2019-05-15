#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x0f;
	while(1){
		PORTD=0xf9;
		PORTE=0x01;
		_delay_ms(5);
		PORTD=0xa4;
		PORTE=0x02;
		_delay_ms(5);
		PORTD=0xb0;
		PORTE=0x04;
		_delay_ms(5);
		PORTD=0x99;
		PORTE=0x08;
		_delay_ms(5);
	}
}
