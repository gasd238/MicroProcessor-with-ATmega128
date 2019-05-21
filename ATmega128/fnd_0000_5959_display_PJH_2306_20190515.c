/*========================================================
	과제 제목: FND
	파일 이름: fnd0000_5959_display_PJH_20190508
	과제 개요: FND를 이용한 타이머 만들기
	구성: DDRx, PORTx레지스터 
  ========================================================
	컨트롤러: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	작성일자: 2019년 5월 15일
	학번: 임베디드SW과 2-3반 6번
	작성자: 박재홍
========================================================*/

#include <avr/io.h>
#include <util/delay.h>

unsigned char digit[10] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
unsigned char latch[4] = {0x01, 0x02, 0x04, 0x08};
int i, fnd[4];  //for문 사용을 위한 변수 i

int main(void)
{
	DDRD = 0xff;  //포트 D 데이터 입출력 방향 설정
	DDRE = 0x3f;  //포트 E 데이터 입출력 방향 설정
	while(1){
		for(i=0;i<100;i++){ //1초를 만들기 위한 for 문
			PORTE = latch[0], PORTD = digit[fnd[0]], _delay_ms(2.5);
			PORTE = latch[1], PORTD = digit[fnd[1]], _delay_ms(2.5);
			PORTE = latch[2], PORTD = digit[fnd[2]], _delay_ms(2.5);
			PORTE = latch[3], PORTD = digit[fnd[3]], _delay_ms(2.5);
		}

		fnd[0]++; //1의 자리 증가
		if(fnd[0] == 10) fnd[0] = 0, fnd[1]++;  //10의 자리 증가
		if(fnd[1] == 6) fnd[1] = 0, fnd[2]++;  //100의 자리 증가
		if(fnd[2] == 10) fnd[2] = 0, fnd[3]++;  //1000의 자리 증가
		if(fnd[3] == 6) fnd[0] = 0, fnd[1] = 0, fnd[2] = 0, fnd[3] = 0;  //1000의 자리 초기화
	}
}
