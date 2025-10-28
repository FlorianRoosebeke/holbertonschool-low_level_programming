#include "main.h"
#include <stdio.h>
/**
 * swap_int :-Write a function that swaps the values of two integers.
 * @a : - int valeur
 * @b : - int valeur
 * Return: void
 */

void swap_int(int *a, int *b)
{
int temp = 0;

temp = *b;
*b = *a;
*a = temp;
}
