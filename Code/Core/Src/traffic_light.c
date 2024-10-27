/*
 * traffic_light.c
 *
 *  Created on: 26 thg 10, 2024
 *      Author: Thảo Quảng
 */

#include "traffic_light.h"

int redTime = 5;
int yellowTime = 2;
int greenTime = 3;

void GREEN_RED() {
	HAL_GPIO_WritePin(LEDR_X_GPIO_Port, LEDR_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDY_X_GPIO_Port, LEDY_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDG_X_GPIO_Port, LEDG_X_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEDR_Y_GPIO_Port, LEDR_Y_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEDY_Y_GPIO_Port, LEDY_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDG_Y_GPIO_Port, LEDG_Y_Pin, GPIO_PIN_RESET);
}
void YELLOW_RED() {
	HAL_GPIO_WritePin(LEDR_X_GPIO_Port, LEDR_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDY_X_GPIO_Port, LEDY_X_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEDG_X_GPIO_Port, LEDG_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDR_Y_GPIO_Port, LEDR_Y_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEDY_Y_GPIO_Port, LEDY_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDG_Y_GPIO_Port, LEDG_Y_Pin, GPIO_PIN_RESET);
}
void RED_GREEN() {
	HAL_GPIO_WritePin(LEDR_X_GPIO_Port, LEDR_X_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEDY_X_GPIO_Port, LEDY_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDG_X_GPIO_Port, LEDG_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDR_Y_GPIO_Port, LEDR_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDY_Y_GPIO_Port, LEDY_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDG_Y_GPIO_Port, LEDG_Y_Pin, GPIO_PIN_SET);
}
void RED_YELLOW() {
	HAL_GPIO_WritePin(LEDR_X_GPIO_Port, LEDR_X_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEDY_X_GPIO_Port, LEDY_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDG_X_GPIO_Port, LEDG_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDR_Y_GPIO_Port, LEDR_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDY_Y_GPIO_Port, LEDY_Y_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEDG_Y_GPIO_Port, LEDG_Y_Pin, GPIO_PIN_RESET);
}

void updateRedTime() {
	if (greenTime + yellowTime < redTime && redTime < 99) {
		redTime++;
	}
}
void updateGreenTime() {
	if (greenTime + yellowTime < redTime && greenTime < 99) {
		greenTime++;
	}
}
void updateYellowTime() {
	if (greenTime + yellowTime < redTime && yellowTime < 99) {
		yellowTime++;
	}
}
