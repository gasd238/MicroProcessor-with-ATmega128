/*========================================================
	과제 제목: 스위치를 이용한 LED제어
	파일 이름: switch_sw12_led_onoff_PJH_2306_20190416
	과제 개요: SW1,2이 눌렸을때 LED 8개 전부 점등하기
	구성: DDRx, PORTx, PINx 레지스터 
  ========================================================
	컨트롤러: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	작성일자: 2019년 4월 10일
	학번: 임베디드SW과 2-3반 6번
	작성자: 박재홍
========================================================*/
#include <avr/io.h>

int main(void)
{
	DDRA = 0xff; //LED포트 A 출력(1) 설정
	DDRE = 0x00;  //0x3f, 0x00, 0x0f PE7, PE6 입력(0) 설정
	while(1){
		switch(PINE&0xc0){
			case 0x40: PORTA = 0x0f; break;
			case 0x80: PORTA = 0xf0; break;
			case 0x00: PORTA = 0x00; break;
			default: PORTA = 0xff; break;
		}
	}		
}

