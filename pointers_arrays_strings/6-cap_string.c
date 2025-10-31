#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @str: pointer to the string to convert
 * Return: pointer to the modified string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
     str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
     str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
     str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
     str[i - 1] == '}') && (str[i] >= 'a' && str[i] <= 'z'))
	{
    str[i] -= ('a' - 'A');
	}
	i++;
	}
return (str);
}
