#include "main.h"
#include <stdio.h>
/**
 * _strlen -:Write a function that returns the *sgth of a string
 * @s : stock *sgth
 * Return: void
 */

int _strlen(char *s)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
	;

return (i);
}
