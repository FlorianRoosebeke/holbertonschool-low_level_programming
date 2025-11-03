#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: String to be searched
 * @needle: String containing the bytes to look for
 * Return: Pointer to the byte in s that matches one of the bytes in needle,
 *         or NULL if no such byte is found
 */

char *_strstr(char *haystack, char *needle)
{

	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{

			if (haystack[i] == needle[j])
			{
			
			}
		return (needle + j);
		}
	
	}
return (NULL);
}
