/*
 * software_timer.c
 *
 *  Created on: Oct 25, 2024
 *      Author: Thảo Quảng
 */

#include "software_timer.h"

int timer_flag[10];
int timer_counter[10];
int TIMER_CYCLE = 10;
void setTimer(int index, int counter){
	timer_flag[index] = 0;
	timer_counter[index] = counter / TIMER_CYCLE;
}
void timerRun(){
	for (int i = 0; i < 10; i++) {
		if (timer_counter[i] >= 0) {
			timer_counter[i]--;
			if (timer_counter[i] <= 0) {
				timer_flag[i] = 1;
			}
		}
	}
}
void timer_isr();
