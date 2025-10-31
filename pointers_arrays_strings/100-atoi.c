#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if ((i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' ||
	s[i - 1] == '\n' || s[i - 1] == ',' ||
	s[i - 1] == ';' || s[i - 1] == '.' ||
	s[i - 1] == '!' || s[i - 1] == '?' ||
	s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' ||
	s[i - 1] == '{' || s[i - 1] == '}') &&
	(s[i] >= 'a' && s[i] <= 'z'))
	{
	s[i] -= ('a' - 'A');
	}
	i++;
	}
return (0);
}
