#include "main.h"
#include <stdio.h>
/**
 * rev_string -:Write a function that reverses a string
 * @s : -char
 * Return: void
 */

void rev_string(char *s)
{
	int start;
	int end;
	char temp;

	start = 0;

	for (end = 0; s[end] != '\0'; end++)
		;

	end--;
	for (; start < end; end--, start++)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}

