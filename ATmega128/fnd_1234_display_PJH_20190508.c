/*========================================================
	과제 제목: FND
	파일 이름: fnd_1234_display_PJH_20190508
	과제 개요: 전원 연결시 FND 4321 표시
	구성: DDRx, PORTx 레지스터 
  ========================================================
	컨트롤러: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	작성일자: 2019년 5월 8일
	학번: 임베디드SW과 2-3반 6번
	작성자: 박재홍
========================================================*/
/*
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x3f;
	while(1){
		PORTE = 0x01;
		PORTD = 0x99;
		_delay_ms(2.5);
		PORTE = 0x02;
		PORTD = 0xb0;
		_delay_ms(2.5);
		PORTE = 0x04;
		PORTD = 0xa4;
		_delay_ms(2.5);
		PORTE = 0x08;
		PORTD = 0xf9;
		_delay_ms(2.5);
	}
}
*/

/*========================================================
	과제 제목: FND
	파일 이름: fnd_1234_display_PJH_20190508-1
	과제 개요: 전원 연결시 FND 4321 표시
	구성: DDRx, PORTx 레지스터 
  ========================================================
	컨트롤러: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	작성일자: 2019년 5월 8일
	학번: 임베디드SW과 2-3반 6번
	작성자: 박재홍
========================================================*/
/*
#include <avr/io.h>
#include <util/delay.h>

unsigned char digit[10] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x3f;
	while(1){
		PORTE = 0x01, PORTD = digit[6], _delay_ms(2.5);
		PORTE = 0x02, PORTD = digit[0], _delay_ms(2.5);
		PORTE = 0x04, PORTD = digit[3], _delay_ms(2.5);
		PORTE = 0x08, PORTD = digit[2], _delay_ms(2.5);
	}
}
*/

/*========================================================
	과제 제목: FND
	파일 이름: fnd_1234_display_PJH_20190508-2
	과제 개요: 전원 연결시 FND 4321 표시
	구성: DDRx, PORTx 레지스터 
  ========================================================
	컨트롤러: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	작성일자: 2019년 5월 8일
	학번: 임베디드SW과 2-3반 6번
	작성자: 박재홍
========================================================*/
/*
#include <avr/io.h>
#include <util/delay.h>

unsigned char digit[10] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
unsigned char latch[4] = {0x01, 0x02, 0x04, 0x08};

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x3f;
	while(1){
		PORTE = latch[0], PORTD = digit[6], _delay_ms(2.5);
		PORTE = latch[1], PORTD = digit[0], _delay_ms(2.5);
		PORTE = latch[2], PORTD = digit[3], _delay_ms(2.5);
		PORTE = latch[3], PORTD = digit[2], _delay_ms(2.5);
	}
}
*/
