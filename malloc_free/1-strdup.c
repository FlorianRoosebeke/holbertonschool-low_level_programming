#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *            containing a copy of the string given as parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL or memory
 *         allocation fails.
 */
char *_strdup(char *str)
{

unsigned int i, len = 0;
char *dup;

if (str == NULL)
	return (NULL);

while (str[len] != '\0')
{
	len++;
}

dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	return (NULL);

for (i = 0 ; i < len ; i++)
	dup[i] = str[i];


dup[len] = '\0';

return (dup);

}


