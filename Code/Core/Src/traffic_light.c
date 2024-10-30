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

void trafficGreenRed() {
	HAL_GPIO_WritePin(LEDR_X_GPIO_Port, LEDR_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDY_X_GPIO_Port, LEDY_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDG_X_GPIO_Port, LEDG_X_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEDR_Y_GPIO_Port, LEDR_Y_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEDY_Y_GPIO_Port, LEDY_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDG_Y_GPIO_Port, LEDG_Y_Pin, GPIO_PIN_RESET);
}
void trafficYellowRed() {
	HAL_GPIO_WritePin(LEDR_X_GPIO_Port, LEDR_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDY_X_GPIO_Port, LEDY_X_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEDG_X_GPIO_Port, LEDG_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDR_Y_GPIO_Port, LEDR_Y_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEDY_Y_GPIO_Port, LEDY_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDG_Y_GPIO_Port, LEDG_Y_Pin, GPIO_PIN_RESET);
}
void trafficRedGreen() {
	HAL_GPIO_WritePin(LEDR_X_GPIO_Port, LEDR_X_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEDY_X_GPIO_Port, LEDY_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDG_X_GPIO_Port, LEDG_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDR_Y_GPIO_Port, LEDR_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDY_Y_GPIO_Port, LEDY_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDG_Y_GPIO_Port, LEDG_Y_Pin, GPIO_PIN_SET);
}
void trafficRedYellow() {
	HAL_GPIO_WritePin(LEDR_X_GPIO_Port, LEDR_X_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEDY_X_GPIO_Port, LEDY_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDG_X_GPIO_Port, LEDG_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDR_Y_GPIO_Port, LEDR_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDY_Y_GPIO_Port, LEDY_Y_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEDG_Y_GPIO_Port, LEDG_Y_Pin, GPIO_PIN_RESET);
}

void updateRedTime() {
	if (redTime < 99) {
		redTime++;
		greenTime++;
	}
}
void updateGreenTime() {
	if (redTime < 99) {
		greenTime++;
		redTime++;
	}
}
void updateYellowTime() {
	if (redTime < 99 && yellowTime < greenTime) {
		yellowTime++;
		redTime++;
	}
}

void setRedTime(int redValue) {
	redTime = redValue;
}
void setYellowTime(int yellowValue) {
	yellowTime = yellowValue;
}
void setGreenTime(int greenValue) {
	greenTime = greenValue;
}

void clearTrafficLight() {
	HAL_GPIO_WritePin(LEDR_X_GPIO_Port, LEDR_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDY_X_GPIO_Port, LEDY_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDG_X_GPIO_Port, LEDG_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDR_Y_GPIO_Port, LEDR_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDY_Y_GPIO_Port, LEDY_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDG_Y_GPIO_Port, LEDG_Y_Pin, GPIO_PIN_RESET);
}

void blinkRedLed() {
	HAL_GPIO_TogglePin(LEDR_X_GPIO_Port, LEDR_X_Pin);
	HAL_GPIO_TogglePin(LEDR_Y_GPIO_Port, LEDR_Y_Pin);
	HAL_GPIO_WritePin(LEDY_X_GPIO_Port, LEDY_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDG_X_GPIO_Port, LEDG_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDY_Y_GPIO_Port, LEDY_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDG_Y_GPIO_Port, LEDG_Y_Pin, GPIO_PIN_RESET);
}
void blinkYellowLed() {
	HAL_GPIO_TogglePin(LEDY_X_GPIO_Port, LEDY_X_Pin);
	HAL_GPIO_TogglePin(LEDY_Y_GPIO_Port, LEDY_Y_Pin);
	HAL_GPIO_WritePin(LEDR_X_GPIO_Port, LEDR_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDG_X_GPIO_Port, LEDG_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDR_Y_GPIO_Port, LEDR_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDG_Y_GPIO_Port, LEDG_Y_Pin, GPIO_PIN_RESET);
}
void blinkGreenLed() {
	HAL_GPIO_TogglePin(LEDG_X_GPIO_Port, LEDG_X_Pin);
	HAL_GPIO_TogglePin(LEDG_Y_GPIO_Port, LEDG_Y_Pin);
	HAL_GPIO_WritePin(LEDR_X_GPIO_Port, LEDR_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDY_X_GPIO_Port, LEDY_X_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDR_Y_GPIO_Port, LEDR_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEDY_Y_GPIO_Port, LEDY_Y_Pin, GPIO_PIN_RESET);
}

void blinkAllLed() {
	HAL_GPIO_TogglePin(LEDR_X_GPIO_Port, LEDR_X_Pin);
	HAL_GPIO_TogglePin(LEDR_Y_GPIO_Port, LEDR_Y_Pin);
	HAL_GPIO_TogglePin(LEDY_X_GPIO_Port, LEDY_X_Pin);
	HAL_GPIO_TogglePin(LEDY_Y_GPIO_Port, LEDY_Y_Pin);
	HAL_GPIO_TogglePin(LEDG_X_GPIO_Port, LEDG_X_Pin);
	HAL_GPIO_TogglePin(LEDG_Y_GPIO_Port, LEDG_Y_Pin);
}
