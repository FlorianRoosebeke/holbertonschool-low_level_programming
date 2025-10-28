#include "main.h"

/**
 * print_triangle - Draws a triangle on the terminal
 * @size: The size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int ligne, space, diez;

	if (size > 0)
		for (ligne = 0; ligne < size; ligne++)
		{
			for (space = 1 ; space < (size - ligne) ; space++)
			{
				_putchar(' ');
			}
			for (diez = 0; diez <= ligne; diez++)
			{
				_putchar('#');
			}

		_putchar('\n');
		}
	else
		_putchar('\n');
}
