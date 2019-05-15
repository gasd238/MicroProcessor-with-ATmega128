/*========================================================
	과제 제목: 스위치를 이용한 LED제어
	파일 이름: switch_sw1_led_shift_PJH_2306_20190416.c
	과제 개요: SW1,2이 눌렸을때 LED 8개 전부 점등하기
	구성: DDRx, PORTx, PINx 레지스터 
  ========================================================
	컨트롤러: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	작성일자: 2019년 4월 16일
	학번: 임베디드SW과 2-3반 6번
	작성자: 박재홍
========================================================*/

#include <avr/io.h>

int main(void)
{ 
	int shift = 0;
	DDRA = 0xff;
	DDRE = 0x0f;
	PORTA = 0xff;
	while(1){
	/*
		if(!(PINE & 0x40)){ //while 로 바꾼게 4-3-1
			PORTA = ~(0x01<<shift++);
			if(shift == 8)shift = 0;
		}
		*/
			while(PINE & 0x40);  //스위치 누름을 기다림
			PORTA = ~(0x01<<shift++);
			if(shift == 8)shift = 0;
			while(!(PINE & 0x40));  //스위치 떨어짐을 기다림
		/* 4-3-3
			if(!(PINE & 0x40)){  //스위치 누름을 기다림
				PORTA = ~(0x01<<shift++);
				if(shift == 8)shift = 0;
				while(!(PINE & 0x40));  //스위치 떨어짐을 기다림
			}

		*/
	}
}
