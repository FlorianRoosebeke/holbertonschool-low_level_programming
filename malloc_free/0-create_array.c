#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with given char
 * @size: number of elements to allocate
 * @c: character to initialize each element with
 *
 * Return: pointer to the newly allocated array, or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ar;

if (size == 0)
	return (NULL);

ar = malloc(sizeof(char) * size);
if (ar == NULL)
	return (NULL);

for (i = 0 ; i < size ; i++)
	ar[i] = c;

return (ar);
}
