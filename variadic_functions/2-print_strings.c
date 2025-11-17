#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed variadic arguments followed new line
 * @separator: string to be printed between strings (can be NULL)
 * @n: the number of strings passed to the function
 *
 * Description: Prints the n strings supplied as variadic arguments separated
 * by the string separator
 * if a string is NULL it prints (nil); if separator
 * is NULL the strings are printed without any separator. A trailing newline
 * is printed after the strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	const char *str;
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, const char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}


