/*========================================================
	���� ����: FND
	���� �̸�: fnd_xxx0_xxx9_display_PJH_20190430
	���� ����: ���� ����� FND ������ �ڸ��� ���� 0~ 9 ǥ��
	����: DDRx, PORTx �������� 
  ========================================================
	��Ʈ�ѷ�: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	�ۼ�����: 2019�� 4�� 30��
	�й�: �Ӻ����SW�� 2-3�� 6��
	�ۼ���: ����ȫ
========================================================*/

//5-2
/*
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x0f;
	PORTE = 0x01;
	while(1){;
		PORTD = 0xc0;
		_delay_ms(1000);
		PORTD = 0xf9;
		_delay_ms(1000);
		PORTD = 0xa4;
		_delay_ms(1000);
		PORTD = 0xb0;
		_delay_ms(1000);
		PORTD = 0x99;
		_delay_ms(1000);
		PORTD = 0x92;
		_delay_ms(1000);
		PORTD = 0x82;
		_delay_ms(1000);
		PORTD = 0xf8;
		_delay_ms(1000);
		PORTD = 0x80;
		_delay_ms(1000);
		PORTD = 0x90;
		_delay_ms(1000);
		}
} */

//5-2-1

/*========================================================
	���� ����: FND
	���� �̸�: fnd_xxx0_xxx9_display_PJH_20190430-1
	���� ����: ���� ����� FND ������ �ڸ��� ���� 0 ~ 9 ǥ��
	����: DDRx, PORTx �������� 
  ========================================================
	��Ʈ�ѷ�: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	�ۼ�����: 2019�� 4�� 30��
	�й�: �Ӻ����SW�� 2-3�� 6��
	�ۼ���: ����ȫ
========================================================*/
/*
#include <avr/io.h>
#include <util/delay.h>

unsigned char digit[10] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
int i;

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x0f;
	PORTE = 0x01;
	while(1){
		for(i=0;i<10;i++){
			PORTD = digit[i];
			_delay_ms(1000);
		}	
	}
} */

//5-2-2
/*========================================================
	���� ����: FND
	���� �̸�: fnd_xxx0_xxx9_display_PJH_20190430-2
	���� ����: ���� ����� FND ������ �ڸ��� ���� 0 ~ 9 ǥ��
	����: DDRx, PORTx �������� 
  ========================================================
	��Ʈ�ѷ�: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	�ۼ�����: 2019�� 5�� 1��
	�й�: �Ӻ����SW�� 2-3�� 6��
	�ۼ���: ����ȫ
========================================================*/
/*
#include <avr/io.h>
#include <util/delay.h>

unsigned char digit[10] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
int num, count;

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x0f;
	PORTE = 0x01;
	while(1){
		num = count++ % 10;	
		if(count == 10) count = 0;
		PORTD = digit[num];
		_delay_ms(1000);	
	}
} 
*/
//5-2-3
/*========================================================
	���� ����: FND
	���� �̸�: fnd_xxx0_xxx9_display_PJH_20190430-3
	���� ����: ���� ����� FND ������ �ڸ��� ���� 9 ~ 0 ǥ��
	����: DDRx, PORTx �������� 
  ========================================================
	��Ʈ�ѷ�: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	�ۼ�����: 2019�� 5�� 1��
	�й�: �Ӻ����SW�� 2-3�� 6��
	�ۼ���: ����ȫ
========================================================*/
/*
#include <avr/io.h>
#include <util/delay.h>

unsigned char digit[10] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
int num, count=9;

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x0f;
	PORTE = 0x01;
	while(1){
		num = count-- % 10;	
		if(count == -1) count = 9;
		PORTD = digit[num];
		_delay_ms(1000);	
	}
} 
*/

//5-2-4
/*========================================================
	���� ����: FND
	���� �̸�: fnd_xxx0_xxx9_display_PJH_20190430-4
	���� ����: ���� ����� FND ������ �ڸ��� ���� 0 ~ 9 ǥ��
	����: DDRx, PORTx �������� 
  ========================================================
	��Ʈ�ѷ�: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	�ۼ�����: 2019�� 5�� 1��
	�й�: �Ӻ����SW�� 2-3�� 6��
	�ۼ���: ����ȫ
========================================================*/
/*
#include <avr/io.h>
#include <util/delay.h>

unsigned char digit[10] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
int num, count;

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x3f;
	PORTE = 0x01;
	while(1){
		num = count % 10;	
		PORTD = digit[num];
		_delay_ms(1000);
		if((PINE & 0x40) == 0)
			if(++count == 10) count = 0;
	}
} 
*/
//5-2-6
/*========================================================
	���� ����: FND
	���� �̸�: fnd_xxx0_xxx9_display_PJH_20190430-5
	���� ����: ���� ����� FND ������ �ڸ��� ���� 0 ~ 9 ǥ��
	����: DDRx, PORTx �������� 
  ========================================================
	��Ʈ�ѷ�: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	�ۼ�����: 2019�� 5�� 1��
	�й�: �Ӻ����SW�� 2-3�� 6��
	�ۼ���: ����ȫ
========================================================*/
/*
#include <avr/io.h>

unsigned char digit[10] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
int num, count;

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x3f;
	PORTE = 0x01;
	while(1){
		num = count % 10;	
		PORTD = digit[num];
		if((PINE & 0x40) == 0){
			if(++count == 10) count = 0;
			while(!(PINE & 0x40));
		}
	}
} 
*/

//5-2-6
/*========================================================
	���� ����: FND
	���� �̸�: fnd_xxx0_xxx9_display_PJH_20190430-6
	���� ����: ���� ����� FND ������ �ڸ��� ���� 0 ~ 9 ǥ��
	����: DDRx, PORTx �������� 
  ========================================================
	��Ʈ�ѷ�: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	�ۼ�����: 2019�� 5�� 1��
	�й�: �Ӻ����SW�� 2-3�� 6��
	�ۼ���: ����ȫ
========================================================*/
/*
#include <avr/io.h>

unsigned char digit[10] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
int num, count = 9;

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x3f;
	PORTE = 0x01;
	while(1){
		num = count % 10;	
		PORTD = digit[num];
		if((PINE & 0x40) == 0){
			if(--count == -1) count = 9;
			while(!(PINE & 0x40));
		}
	}
} 
*/

//5-2-7
/*========================================================
	���� ����: FND
	���� �̸�: fnd_xxx0_xxx9_display_PJH_20190508-7
	���� ����: ���� ����� FND ������ �ڸ��� ���� 0 ~ 9 ǥ��
	����: DDRx, PORTx �������� 
  ========================================================
	��Ʈ�ѷ�: ATmega128
	CLOCK: 16Mhz
	Comfiler: AVR studio 4 + WinAVR
  ========================================================
	�ۼ�����: 2019�� 5�� 1��
	�й�: �Ӻ����SW�� 2-3�� 6��
	�ۼ���: ����ȫ
========================================================*/
/*
#include <avr/io.h>

unsigned char digit[10] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
int num, count;

int main(void)
{
	DDRD = 0xff;
	DDRE = 0x3f;
	PORTE = 0x01;
	while(1){
		num = count % 10;
		PORTD = digit[num];
		while(PINE&0x40);
		if(++count == 10) count = 0;
		while(!(PINE & 0x40));	
	}
}
*/
