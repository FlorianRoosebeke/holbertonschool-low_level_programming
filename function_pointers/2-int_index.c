#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - search an array for the first element that matches a condition
 * @array: pointer to the array of integers
 * @size: number of elements in the array
 * @cmp: pointer to a function that compares an int returns non-zero on match
 *
 * Return: index of the first element for which cmp returns non-zero,
 *         or -1 if the array is NULL, size is 0 cp is NULL no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);

	if (size == 0)
		return (-1);

	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
