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
			for (space = size - ligne; space > 0; space--)
			{
				_putchar(' ');
			}
			for (diez = 0; diez <= ligne; diez++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
}
