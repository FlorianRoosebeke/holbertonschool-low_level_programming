#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
	str[i - 1] == '\n' || str[i - 1] == ',' ||
	str[i - 1] == ';' || str[i - 1] == '.' ||
	str[i - 1] == '!' || str[i - 1] == '?' ||
	str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
	str[i - 1] == '{' || str[i - 1] == '}') &&
	(str[i] >= 'a' && str[i] <= 'z'))
	{
	str[i] -= ('a' - 'A');
	}
	i++;
	}
return (str);
}
