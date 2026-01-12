/*
 * display_led.c
 *
 *  Created on: Sep 29, 2025
 *      Author: vnpt2
 */

#include "display_led.h"
void display7SEG(int counter){
    switch(counter){
        case 0:
            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
            break;
        case 1:
            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
            break;
        case 2:
            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
            break;
        case 3:
            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
            break;
        case 4:
            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
            break;
        case 5:
            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
            break;
        case 6:
            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
            break;
        case 7:
            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
            break;
        case 8:
            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
            break;
        case 9:
            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
            break;
    }
}

void update7SEG(int index) {
    if(index == 0) {
        HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
        HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
    } else {
        HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
        HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
    }
}

