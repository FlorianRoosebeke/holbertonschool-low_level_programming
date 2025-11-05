#include <stdio.h>

/**
 * main - prints the number of command line arguments
 * @argc: number of arguments passed to the program
 * @argv: array of argument strings
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i = 0;
	(void)argc;
	(void)argv;

	while (i < argc)
	{
	printf("%s\n", argv[i]);
	i++;
	}
return (0);
}
