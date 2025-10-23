#include "main.h"
/**
 * _isalpha - Write a function checks for lowercase/upper char
 * @c: print alphabet in lowercase
 *
 * Return: return 1 or 0 cool
 */
int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}

