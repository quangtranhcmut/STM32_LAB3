/*
 * seven_segment_led.h
 *
 *  Created on: Oct 25, 2024
 *      Author: Thảo Quảng
 */

#ifndef INC_SEVEN_SEGMENT_LED_H_
#define INC_SEVEN_SEGMENT_LED_H_

#include "main.h"
int led_buffer[4];
void resetAllDigits();
void setDigit(int digitSerial);
void setNum2Digit(int a, int b, int c, int d, int e, int f, int g);
void display7SEG(int num);
void update7SEG(int index);
void updateBufferXLine(int value);
void updateBufferYLine(int value);

#endif /* INC_SEVEN_SEGMENT_LED_H_ */
