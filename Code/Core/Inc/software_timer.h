/*
 * software_timer.h
 *
 *  Created on: Oct 25, 2024
 *      Author: Thảo Quảng
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "main.h"

extern int timer_flag[];
extern int timer_counter[];
extern int TIMER_CYCLE;
void setTimer(int index, int counter);
void timerRun();
void timer_isr();

#endif /* INC_SOFTWARE_TIMER_H_ */
