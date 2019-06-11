/*========================================================
	���� ����: FND
	���� �̸�: fnd0000_5959_display_PJH_20190508
	���� ����: FND�� �̿��� Ÿ�̸� �����
	����: DDRx, PORTx�������� 
  ========================================================
	��Ʈ�ѷ�: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	�ۼ�����: 2019�� 5�� 15��
	�й�: �Ӻ����SW�� 2-3�� 6��
	�ۼ���: ����ȫ
========================================================*/

/*
#include <avr/io.h>
#include <util/delay.h>

unsigned char digit[10] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
unsigned char latch[4] = {0x01, 0x02, 0x04, 0x08};
int i, fnd[4];  //for�� ����� ���� ���� i

int main(void)
{
	DDRD = 0xff;  //��Ʈ D ������ ����� ���� ����
	DDRE = 0x3f;  //��Ʈ E ������ ����� ���� ����
	while(1){
		for(i=0;i<100;i++){ //1�ʸ� ����� ���� for ��
			PORTE = latch[0], PORTD = digit[fnd[0]], _delay_ms(2.5);
			PORTE = latch[1], PORTD = digit[fnd[1]], _delay_ms(2.5);
			PORTE = latch[2], PORTD = digit[fnd[2]], _delay_ms(2.5);
			PORTE = latch[3], PORTD = digit[fnd[3]], _delay_ms(2.5);
		}

		fnd[0]++; //1�� �ڸ� ����
		if(fnd[0] == 10) fnd[0] = 0, fnd[1]++;  //10�� �ڸ� ����
		if(fnd[1] == 6) fnd[1] = 0, fnd[2]++;  //100�� �ڸ� ����
		if(fnd[2] == 10) fnd[2] = 0, fnd[3]++;  //1000�� �ڸ� ����
		if(fnd[3] == 6) fnd[0] = 0, fnd[1] = 0, fnd[2] = 0, fnd[3] = 0;  //1000�� �ڸ� �ʱ�ȭ
	}
}
*/

/*========================================================
	���� ����: FND
	���� �̸�: fnd0000_5959_display_PJH_20190508-1
	���� ����: FND�� �̿��� Ÿ�̸� �����
	����: DDRx, PORTx�������� 
  ========================================================
	��Ʈ�ѷ�: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	�ۼ�����: 2019�� 5�� 21��
	�й�: �Ӻ����SW�� 2-3�� 6��
	�ۼ���: ����ȫ
========================================================*/

/*
#include <avr/io.h>
#include <util/delay.h>

unsigned char digit[10] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
unsigned char latch[4] = {0x01, 0x02, 0x04, 0x08};
int i, M10, M1, S10, S1, min, sec;

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x3f;

	while(1){
		M10 = min / 10;
		M1 = min % 10;
		S10 = sec / 10;
		S1 = sec % 10;
		for (i=0;i<100;i++){
			PORTE = latch[0], PORTD = digit[S1], _delay_ms(2.5);
			PORTE = latch[1], PORTD = digit[S10], _delay_ms(2.5);
			PORTE = latch[2], PORTD = digit[M1]&0x7f, _delay_ms(2.5);
			PORTE = latch[3], PORTD = digit[M10], _delay_ms(2.5);
		}
		if(++sec == 60)sec = 0,min++;
		if (min == 60)min = 0;
	}
}
*/

/*========================================================
	���� ����: FND
	���� �̸�: fnd0000_5959_display_PJH_20190508-2
	���� ����: FND�� �̿��� Ÿ�̸� �����
	����: DDRx, PORTx�������� 
  ========================================================
	��Ʈ�ѷ�: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	�ۼ�����: 2019�� 5�� 21��
	�й�: �Ӻ����SW�� 2-3�� 6��
	�ۼ���: ����ȫ
========================================================*/
/*
#include <avr/io.h>
#include <util/delay.h>

unsigned char digit[10] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
unsigned char latch[4] = {0x01, 0x02, 0x04, 0x08};
int i, M10, M1, S10, S1, min, sec, run;

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x3f;

	while(1){
		M10 = (min/10)%10;
		M1 = min % 10;
		S10 = (sec/10)%10;
		S1 = sec % 10;
		for (i=0;i<100;i++){
			PORTE = latch[0], PORTD = digit[S1], _delay_ms(2.5);
			PORTE = latch[1], PORTD = digit[S10], _delay_ms(2.5);
			PORTE = latch[2], PORTD = digit[M1]&0x7f, _delay_ms(2.5);
			PORTE = latch[3], PORTD = digit[M10], _delay_ms(2.5);
		}
		if(!(PINE&0x40)){
			run = !run;
			while(!(PINE&0x40));
		}
		if(run == 1){
			if(++sec == 60)sec = 0,min++;
			if (min == 60)min = 0;
		}
		if(!(PINE&0x80))
			if(run == 0) min = 0, sec = 0;
	}
}
*/

/*========================================================
	���� ����: FND
	���� �̸�: fnd0000_5959_display_PJH_20190508-3
	���� ����: FND�� �̿��� Ÿ�̸� �����
	����: DDRx, PORTx�������� 
  ========================================================
	��Ʈ�ѷ�: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	�ۼ�����: 2019�� 5�� 21��
	�й�: �Ӻ����SW�� 2-3�� 6��
	�ۼ���: ����ȫ
========================================================*/
/*
#include <avr/io.h>
#include <util/delay.h>

unsigned char digit[10] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
unsigned char latch[4] = {0x01, 0x02, 0x04, 0x08};
int i, min, sec, run;

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x3f;

	while(1){
		for (i=0;i<100;i++){
			PORTE = latch[0], PORTD = digit[sec % 10], _delay_ms(2.5);
			PORTE = latch[1], PORTD = digit[(sec/10)%10], _delay_ms(2.5);
			PORTE = latch[2], PORTD = digit[min % 10]&0x7f, _delay_ms(2.5);
			PORTE = latch[3], PORTD = digit[(min/10)%10], _delay_ms(2.5);
		}
		if(!(PINE&0x40)){
			run = !run;
			while(!(PINE&0x40)){
				PORTE = latch[0], PORTD = digit[sec % 10], _delay_ms(2.5);
				PORTE = latch[1], PORTD = digit[(sec/10)%10], _delay_ms(2.5);
				PORTE = latch[2], PORTD = digit[min % 10]&0x7f, _delay_ms(2.5);
				PORTE = latch[3], PORTD = digit[(min/10)%10], _delay_ms(2.5);
			}
		if(run == 1){
			if(++sec == 60)sec = 0,min++;
			if (min == 60)min = 0;
		}
		if(!(PINE&0x80))
			if(run == 0) min = 0, sec = 0;
	}
}
*/

/*========================================================
	���� ����: FND
	���� �̸�: fnd0000_5959_display_PJH_20190508-3
	���� ����: FND�� �̿��� Ÿ�̸� �����
	����: DDRx, PORTx�������� 
  ========================================================
	��Ʈ�ѷ�: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	�ۼ�����: 2019�� 5�� 21��
	�й�: �Ӻ����SW�� 2-3�� 6��
	�ۼ���: ����ȫ
========================================================*/

#include <avr/io.h>
#include <util/delay.h>

unsigned char digit[10] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
unsigned char latch[4] = {0x01, 0x02, 0x04, 0x08};
int i, M10, M1, S10, S1, min, sec, run;
void display(int MIN, int SEC);

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x3f;

	while(1){
		display(min, sec);
		if(!(PINE&0x40)){
			run ^= 1;
			while(!(PINE&0x40))
				display(min, sec);
		}
		if(run == 1){
			if(++sec == 6000)sec = 0,min++;
			if (min == 60)min = 0;
		}
		if(!(PINE&0x80))
			if(run == 0) min = 0, sec = 0;
	}
}

void display(int MIN, int SEC){
	M10 = (MIN/10)%10;
	M1 = MIN % 10;
	S10 = (SEC/1000)%10;
	S1 = (SEC/100)%10;	
	PORTD = digit[S1], PORTE = latch[0], _delay_ms(2.5);
	PORTD = digit[S10],PORTE = latch[1],  _delay_ms(2.5); 
	PORTD = digit[M1]&0x7f, PORTE = latch[2], _delay_ms(2.5);
	PORTD = digit[M10], PORTE = latch[3], _delay_ms(2.5);
}
