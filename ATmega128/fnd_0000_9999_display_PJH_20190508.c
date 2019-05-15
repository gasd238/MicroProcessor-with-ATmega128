/*========================================================
	���� ����: FND
	���� �̸�: fnd_xxx0_xxx9_display_PJH_20190508
	���� ����: FND�� �̿��� 1/10�� Ÿ�̸� �����
	����: DDRx, PORTx, PINx �������� 
  ========================================================
	��Ʈ�ѷ�: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	�ۼ�����: 2019�� 5�� 8��
	�й�: �Ӻ����SW�� 2-3�� 6��
	�ۼ���: ����ȫ
========================================================*/
//5-5
/*
#include <avr/io.h>
#include <util/delay.h>

unsigned char digit[10] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
unsigned char latch[4] = {0x01, 0x02, 0x04, 0x08};
long int count;
int fnd1, fnd10, fnd100, fnd1000;

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x3f;
	while(1){
		fnd1 = (count / 10) % 10;
		fnd10 = (count / 100) % 10;
		fnd100 = (count / 1000) % 10;
		fnd1000 = count++ / 10000;

		PORTE = latch[0], PORTD = digit[fnd1], _delay_ms(2.5);
		PORTE = latch[1], PORTD = digit[fnd10], _delay_ms(2.5);
		PORTE = latch[2], PORTD = digit[fnd100], _delay_ms(2.5);
		PORTE = latch[3], PORTD = digit[fnd1000], _delay_ms(2.5);
		if(count == 100000) count = 0;
	}
}
*/

//5-5-1
/*
#include <avr/io.h>
#include <util/delay.h>

unsigned char digit[10] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
unsigned char latch[4] = {0x01, 0x02, 0x04, 0x08};
int i, fnd1, fnd10, fnd100, fnd1000;

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x3f;
	while(1){
		for(i=0;i<10;i++){
			PORTE = latch[0], PORTD = digit[fnd1], _delay_ms(2.5);
			PORTE = latch[1], PORTD = digit[fnd10], _delay_ms(2.5);
			PORTE = latch[2], PORTD = digit[fnd100], _delay_ms(2.5);
			PORTE = latch[3], PORTD = digit[fnd1000], _delay_ms(2.5);
		}

		fnd1++;
		if(fnd1==10) fnd1=0, fnd10++;
		else if(fnd10==10) fnd10=0, fnd100++;
		else if(fnd100==10) fnd100=0, fnd1000++;
		else if(fnd1000==10) fnd1=0, fnd10=0, fnd100=0, fnd1000=0;
	}
}
*/
