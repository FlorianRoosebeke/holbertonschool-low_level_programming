#include "main.h"
#include <stdio.h>

/**
 * print_to_98 :-Whrite function prints all natural numbers from n to 98
 * @n : n egal number go to 98
 * No parameters and no return value.
 */
void print_to_98(int n)
{

while (n != 98)
	{
	if (n > 98)
	{
		n--;
		printf("%d, ",  n);
	}
	else
	{
		n++;
		printf("%d, ", n);
	}
	}
printf("98\n");
}
