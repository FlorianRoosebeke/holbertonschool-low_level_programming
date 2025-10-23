#include "main.h"
/**
 * print_sign -Write a function that prints the sign of a number.
 * @n : print number
 *
 * Return: return 1 or 0 cool
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
			return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
			return (0);
	}
	else
{
		_putchar('-');
			return (-1);
	}
}

