#include "main.h"
#include <stdio.h>

/**
 * _isupper -Check if uppercase or other
 * @c : checker
 * Return: Always 0.
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
