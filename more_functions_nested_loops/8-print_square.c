#include "main.h"

/**
 * print_square - Write a function that prints a square, followed by a new line
 * @size : -is the size of the square
 * Return: void
 */

void print_square(int size)
{
	int i, n;

	if (!(size <= 0))

		for (i = 0 ; i < size ; i++)
		{
			for (n = 0 ; n < size ; n++)
			{
			_putchar('#');
			}
		_putchar('\n');

		}
	else
		_putchar('\n');
}
