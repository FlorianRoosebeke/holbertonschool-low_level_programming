#include "main.h"
#include <stdio.h>
/**
 * _puts -:Write a function that prints a string andnew line stdout.
 * @str : string char
 * Return: void
 */

void _puts(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
_putchar('\n');
}
