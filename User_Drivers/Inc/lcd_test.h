#ifndef __LCD_TEST_H
#define __LCD_TEST_H

#include "lcd_image.h"
#include "lcd_show.h"
#include "stm32h7xx_hal.h"

void LCD_Test_Clear(void);       // ��������
void LCD_Test_Text(void);        //	�ı���ʾ����
void LCD_Test_Variable(void);    // ������ʾ������������С��
void LCD_Test_Color(void);       // ��ɫ����
void LCD_Test_GrahicTest(void);  // 2Dͼ�λ���
void LCD_Test_FillRect(void);    // ����������
void LCD_Test_Image(void);       // ͼƬ��ʾ����
void LCD_Test_Vertical(void);    // ��ֱ��ʾ����
void LCD_Test_DoubleLayer(void); // ˫����ʾ

#endif //__LCD_TEST_H
