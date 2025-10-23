#include "main.h"
/**
 * print_last_digit -Write a function that prints the last digit.
 * @x : print number
 *
 * Return: return 1 or 0 cool
 */
int print_last_digit(int r)
{
	int n = (r % 10);

	if (n >= 0)
	{
	_putchar(n + '0');
	}
	else
    {
		_putchar(-n + '0');
        return (-n);
	}
return (0);
}

