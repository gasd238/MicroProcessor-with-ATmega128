#include<avr/io.h>

int main(){
	DDRD = 0xff;
	DDRE = 0xff;
	PORTD = 0x00;
	PORTE = 0xff;
}
