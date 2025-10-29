#include "main.h"

/**
 * puts_half -:Write a function that reverses a string
 * @str : -string
 * Return: void
 */

void puts_half(char *str)

{
int len;
int n;


	for (len = 0; str[len] != '\0'; len++)
	;
	n = ((len + 1) / 2);

		while (str[n] != '\0')
		{

		_putchar(str[n]);
		n++;
		}
	_putchar('\n');
}

