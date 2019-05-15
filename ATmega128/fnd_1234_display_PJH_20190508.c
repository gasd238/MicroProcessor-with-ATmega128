/*========================================================
	���� ����: FND
	���� �̸�: fnd_1234_display_PJH_20190508
	���� ����: ���� ����� FND 4321 ǥ��
	����: DDRx, PORTx �������� 
  ========================================================
	��Ʈ�ѷ�: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	�ۼ�����: 2019�� 5�� 8��
	�й�: �Ӻ����SW�� 2-3�� 6��
	�ۼ���: ����ȫ
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
	���� ����: FND
	���� �̸�: fnd_1234_display_PJH_20190508-1
	���� ����: ���� ����� FND 4321 ǥ��
	����: DDRx, PORTx �������� 
  ========================================================
	��Ʈ�ѷ�: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	�ۼ�����: 2019�� 5�� 8��
	�й�: �Ӻ����SW�� 2-3�� 6��
	�ۼ���: ����ȫ
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
	���� ����: FND
	���� �̸�: fnd_1234_display_PJH_20190508-2
	���� ����: ���� ����� FND 4321 ǥ��
	����: DDRx, PORTx �������� 
  ========================================================
	��Ʈ�ѷ�: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	�ۼ�����: 2019�� 5�� 8��
	�й�: �Ӻ����SW�� 2-3�� 6��
	�ۼ���: ����ȫ
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
