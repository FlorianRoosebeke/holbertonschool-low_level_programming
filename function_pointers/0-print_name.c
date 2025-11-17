#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - call a function to print a name
 * @name: the name to be printed
 * @f: pointer to a function that takes a char * and returns void
 *
 * Description: If name or f is NULL the function does nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

