#include "main.h"

/**
 * print_rev -:Write a function prints  in reverse, followed by a new line
 * @s : -char
 * Return: void
 */

void print_rev(char *s)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
	;
	for (; i != 0 ; i--)
		_putchar(s[i -1]);

_putchar('\n');
}
