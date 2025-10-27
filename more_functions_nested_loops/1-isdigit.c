#include "main.h"
#include <stdio.h>

/**
 * _isdigit -Check if digit or not
 * @c : checker
 * Return: Always 0.
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
