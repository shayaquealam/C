/*
 * bitwise.c
 *
 *  Created on: 16-Oct-2022
 *      Author: alam
 */

#include "bitwise.h"
void bitwise_operator()
{
	uint8_t arr1[4] = {10,20,30,40};
	uint8_t arr2[4];
	uint32_t data = 0xABCD9856;
	uint8_t data1[4];
	uint32_t data2;
	uint16_t data3;

	int i;

	for(i=0;i<4;i++)
	{
		arr2[i] = arr1[i];
	}
	printf("array element : ");
	for(i=0;i<4;i++)
	{
		printf("%d ",arr2[i]);
	}

	printf("\n");

	printf("data after shifting :");

		data1[0] = data;
		data1[1] = (data >> 8);
		data1[2] = (data >> 16);
		data1[3] = data >> 24;

	for(i=0;i<4;i++)
	{
		printf("%X ",data1[i]);
	}

	printf("\n");

	printf("%X",data);

	printf("\n");

	printf("alone data\n");

	printf("%X",data >> 24);
	printf("\n");
	printf("%X",data >> 16);
	printf("\n");
	printf("%X",data >> 8);
	printf("\n");
	printf("%X",data);

	printf("\n");

	data2 = data >> 8;

	printf("%X",data2);

	printf("\n");

	data3 = data;

	printf("%X",data3);


	return;

}

