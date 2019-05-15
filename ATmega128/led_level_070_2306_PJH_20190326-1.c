/*========================================================
	과제 제목: A포트를 이용한 led 점등
	파일 이름: led_half_cross_delay_2306_PJH_20190320
	과제 개요: 포트 A에 출력 신호를 주어서 LED 점등하기
	구성: DDRx, PORTx 레지스터 
  ========================================================
	컨트롤러: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	작성일자: 2019년 3월 20일
	학번: 임베디드SW과 2-3반 6번
	작성자: 박재홍
========================================================*/
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRA = 0b11111111;
	unsigned char y = 0b00000001;
    for(int i=0;i<7;i++){
		PORTA = ~y;
       	_delay_ms(500);
		y <<= 1;
    }
	unsigned char y = 0b10000000;
    for(int i=0;i<7;i++){
		PORTA = ~y;
       	_delay_ms(500);
		y >>= 1;
    }
}

