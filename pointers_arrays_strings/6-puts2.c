#include "main.h"
#include <stdio.h>
/**
 * puts2 :-Write a function that prints every other character of a string
 * @str : charactere
 * Return: void
 */

void puts2(char *str)
{
	int start;

	for (start = 0; str[start] != '\0'; start++)
	{
		if (start % 2 == 0)
		{
			_putchar(str[start]);
		}
	}
}


