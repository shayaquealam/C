/*
 * enum.c
 *
 *  Created on: 16-Sep-2022
 *      Author: alam
 */

#include <stdio.h>
#include "enum.h"
enum number
{   a=100,
	b,
	c,
	d,
	e,
	f,
	g,
	h,
	i,j,k,
	l,
	m,
	n,
	o,
	p,
	q,
	r,
	s,
	t,
	u,
	v,
	w,x,
	y,
	z
};

enum weak {mon=3000201,
tue,
wed,
thur,
fri,
sat,
sun,
};

//enum float_data {float1 = 5.65};

void enum_function()
{
	int i;
	enum number n;
	enum weak day;

	//sum of two number by using enum varable
	printf("sum of two number: %d\n",a+u);

	printf("all number in enum : ");
	for(i=a;i<=z;i++)
	{
		printf("%d ",i);
	}

	printf("\n");
	printf("size of enum number: %d\n",sizeof(n));

	//weak day
	printf("%d\n", mon);

	printf("size of enum weak: %d\n",sizeof(day));
}


int main()
{
	enum_function();
	return 0;
}
