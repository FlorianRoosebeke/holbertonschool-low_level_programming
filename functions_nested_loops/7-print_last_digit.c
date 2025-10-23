#include "main.h"
/**
 * print_last_digit :-Write print last number with %
 * @r : modulo 10
 * Return: return 1 or 0 cool
 */
int print_last_digit(int r)
{
	int n = (r % 10);

	if (n < 0)
	n = -n;
	else
	n = n;
	_putchar('0' + n);
	return (n);
}

