/*
 * main.c
 *
 *  Created on: 16-Sep-2022
 *      Author: alam
 */

#include "main.h"
#include "pointer.h"
#include "bitwise.h"

uint8_t data[10] = {0x01,0x02,0x03,0x01,0x09,0x04,0x05,0x07,0x04,0x05};

uint8_t data_in[10] = {0x02,0x03,0x04,0x01,0x05,0x02,0x01,0x09,0x08,0x07};

uint8_t data_out[10];

int main()
{
//	int i;
//	int a = 10, b = 100;
	/*uint8_t sum_array[10] = {10,20,30,40,50,60,70,80,90,100};
	uint8_t reverse_array[10];
	uint8_t *array_value;

	uint8_t *temp;
	test_data(data);

	for(i=0;i<10;i++)
	{
		printf("%d ",data[i]);
	}

	temp = sample_data(data_in);

	for(i=0;i<10;i++)
	{
		data_out[i] = *(temp+i);
	}

	for(i=0;i<10;i++)
	{
		printf("%d ",data_out[i]);
	}
	printf("\n");*/
	/************Pointer******************/
	//sum of two number
	/*pointer_basic(&a,&b);

	//sum of number in array
	uint16_t sum = pointer_sum_array(sum_array,10);

	printf("sum of number in array = %d",sum);

	//reverse the sum array
	pointer_reverse_array(sum_array,reverse_array,10);

	for(i=0;i<10;i++)
	{
		printf("\n%d ",reverse_array[i]);
	}*/

/*	printf("\nafter reversing array : ");

	for(i=0;i<10;i++)
	{
		printf("%d ",reverse_array[i]);
	}

	//return array base address
	array_value = array_return_with_base_address(sum_array,10);

	printf("array_value = ");

	for(i=0;i<10;i++)
	{
		printf("%d ",array_value[i]);
	}
*/

	/**********bitwise operation*************/
	bitwise_operator();
	return 0;
}


