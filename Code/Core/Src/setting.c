/*
 * setting.c
 *
 *  Created on: 31 thg 10, 2024
 *      Author: Thảo Quảng
 */

#include "setting.h"

void fsm_setting() {
	switch(status) {
		case INIT: {
			if (1) {
				status = AUTO;
			}
			break;
		}
		case AUTO: {
			if (isButtonPressed(0)) {
				status = MAN;
				setTimer(2, 10000); // Timer 3
				setTimer(3, 500); // Timer 4
				clearTrafficLight();
			}
			break;
		}
		case MAN: {
			if (isButtonPressed(2)) {
				status = AUTO;
				break;
			}
			if (timer_flag[2] == 1) {
				status = AUTO;
				break;
			}
			break;
		}
		default: {
			break;
		}
	}
}

