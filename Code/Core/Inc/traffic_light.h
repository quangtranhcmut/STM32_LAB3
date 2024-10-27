/*
 * traffic_light.h
 *
 *  Created on: 26 thg 10, 2024
 *      Author: Thảo Quảng
 */

#ifndef INC_TRAFFIC_LIGHT_H_
#define INC_TRAFFIC_LIGHT_H_

#include "main.h"

extern int redTime;
extern int yellowTime;
extern int greenTime;

void GREEN_RED();
void YELLOW_RED();
void RED_GREEN();
void RED_YELLOW();
void updateRedTime();
void updateGreenTime();
void updateYellowTime();

#endif /* INC_TRAFFIC_LIGHT_H_ */
