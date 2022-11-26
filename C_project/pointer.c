/*
 * pointer.c
 *
 *  Created on: 16-Sep-2022
 *      Author: alam
 */
#include "pointer.h"

void pointer_basic(int *a, int *b)
{
	int sum = *a + *b;
	printf("sum of two number by pointer = %d\n",sum);
	return;
}

void test_data(uint8_t *data)
{
	uint8_t temp = 0x03;

	int i;

	for(i=0;i<10;i++)
	{
		data[i] = temp;
	}
}

uint8_t *sample_data(uint8_t *data)
{
	uint8_t temp = 0x04;
	int i;
	for(i=0;i<10;i++)
	{
		*(data+i) = temp;
	}

	return data;
}

uint16_t pointer_sum_array(uint8_t *data,int length)
{
	int i, sum = 0;
	for(i=0;i<length;i++)
	{
		sum = sum + data[i];
	}
return sum;
}

void pointer_reverse_array(uint8_t *data1, uint8_t *data2, int length)
{
	int i;

	for(i=0;i<length;i++)
	{
		*data2++ = data1[(length-1)-i];
	}
	return;
}

uint8_t *array_return_with_base_address(uint8_t *data, int length)
{
	int i;
	uint8_t data_out[10];
	for(i=0;i<length;i++)
	{
		data_out[i] = data[i];
	}
	return data_out[0];
}
