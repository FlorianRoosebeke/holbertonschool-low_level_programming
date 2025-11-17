#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints integers passed variadic arguments followed new line
 * @separator: string to be printed between numbers (can be NULL)
 * @n: the number of integers passed to the function
 *
 * Description: Prints the n integers supplied as variadic arguments separated
 * by the string separator; if separator is NULL the numbers are printed
 * without any separator. A trailing newline is printed after the numbers.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int nbre;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		nbre = va_arg(ap, int);
		printf("%d", nbre);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	putchar('\n');
}

