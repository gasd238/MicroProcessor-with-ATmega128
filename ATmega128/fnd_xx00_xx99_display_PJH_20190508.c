/*========================================================
	과제 제목: FND
	파일 이름: fnd_1234_xx00_xx99_PJH_20190508
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
int count, fnd1, fnd10;

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x3f;
	while(1){
		fnd1 = (count / 10) % 10;
		fnd10 = count++ / 100;

		PORTE = latch[0], PORTD = digit[fnd1], _delay_ms(5);
		PORTE = latch[1], PORTD = digit[fnd10], _delay_ms(5);
		if(count == 1000) count = 0;
	}
}
*/


/*========================================================
	과제 제목: FND
	파일 이름: fnd_1234_xx00_xx99_PJH_20190508-1
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
int count, fnd1, fnd10;

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x3f;
	while(1){
		fnd1 = (count / 10) % 10;
		fnd10 = count / 100;

		PORTE = latch[0], PORTD = digit[fnd1], _delay_ms(5);
		PORTE = latch[1], PORTD = digit[fnd10], _delay_ms(5);
		if(!(PINE & 0x40))
			if(++count == 1000) count = 0;
	}
}
*/

/*========================================================
	과제 제목: FND
	파일 이름: fnd_1234_xx00_xx99_PJH_20190508-2
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
int count, fnd1, fnd10;

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x3f;
	while(1){
		fnd1 = (count / 10) % 10;
		fnd10 = count / 100;

		PORTE = latch[0], PORTD = digit[fnd1], _delay_ms(5);
		PORTE = latch[1], PORTD = digit[fnd10], _delay_ms(5);
		if(!(PINE & 0x40))
			if(++count == 1000) count = 0;
		if(!(PINE & 0x80))
			if(--count == -1) count = 999;
	}
}
*/
