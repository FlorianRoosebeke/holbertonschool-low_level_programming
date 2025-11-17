#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute a function on each element of an array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @action: pointer to a function that takes an int and returns void
 *
 * Description: Calls action each element of array If array or action is NULL,
 * or if size is 0, the function does nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;

	if (array == NULL || action == NULL)
		return;

	if (size == 0)
		return;

	for (i = 0 ; i < size ; i++)
	action(array[i]);
}


