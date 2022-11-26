/*
 * pointer.h
 *
 *  Created on: 16-Sep-2022
 *      Author: alam
 */

#ifndef POINTER_H_
#define POINTER_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void test_data(uint8_t *data);

uint8_t *sample_data(uint8_t *data);

/**
 * @brief basics for pointer
 */
void pointer_basic(int *a, int *b);

/**
 * @brief sum of array using pointer
 */
uint16_t pointer_sum_array(uint8_t *data, int length);

/**
 * @brief reverse the array
 */
void pointer_reverse_array(uint8_t *data1, uint8_t *data2, int length);

uint8_t *array_return_with_base_address(uint8_t *data, int length);

#endif /* POINTER_H_ */
