#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its integer parameters
 * @n: The number of integer arguments passed to the function
 *
 * Return: If n is 0 returns 0 otherwise returns the sum the provided integers.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int nbre;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		nbre = va_arg(ap, int);
	printf("%d", nbre);

	if (nbre != 402)
		printf("%s", separator);

	}
putchar('\n');
}
