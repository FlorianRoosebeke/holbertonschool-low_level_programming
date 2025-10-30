#include "main.h"

/**
 * _strncat :-Write a function that concatenates two strings.
 * @dest :-Destination
 * @src :-Source
 * @n : limit
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
