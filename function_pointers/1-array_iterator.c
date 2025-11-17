#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - execute a function on each element of an integer array
 * @array: pointer to the array of integers
 * @size: number of elements in the array
 * @action: pointer to a function that takes an int and returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	if (size == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

