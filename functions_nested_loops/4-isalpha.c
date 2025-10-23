#include "main.h"
/**
 * _islower - Write a function that checks for lowercase character
 * @c: print alphabet in lowercase
 *
 * Return: return 1 or 0 cool
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}

