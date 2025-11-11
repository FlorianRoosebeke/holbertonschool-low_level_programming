#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a newly allocated space in memory
 *               containing the contents of s1 followed by s2.
 * @s1: first string (may be NULL, treated as empty)
 * @s2: second string (may be NULL, treated as empty)
 *
 * Return: pointer to the newly allocated concatenated string, or NULL on
 *         allocation failure.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i, j;
	char *res;

	if (s1)
	{
		while (s1[len1])
			len1++;
	}
	if (s2)
	{
		while (s2[len2])
			len2++;
	}

	res = malloc(len1 + len2 + 1);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		res[i] = s1[i];
	for (j = 0; j < len2; j++)
		res[i + j] = s2[j];
	res[len1 + len2] = '\0';

	return (res);
}


