#include "main.h"
#include <stdio.h>

/**
 * _strcpy :-Write a function that copies the string pointed to by src
 * @dest : destination
 * @src : source
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; i < src[i]; i++)
		dest[i] = src[i];
	return (dest);
}

