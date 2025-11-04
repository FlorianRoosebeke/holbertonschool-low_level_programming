#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix
 * @size: Size of the square matrix
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i * size + i];
		d2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", d1, d2);
}
