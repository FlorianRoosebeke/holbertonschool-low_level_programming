#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n:  number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int colonne, ligne;

	if (!(n <= 0))

		for (colonne = 0; colonne < n; colonne++)
		{
			for (ligne = 0; ligne < colonne; ligne++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	else
		_putchar('\n');
}
