#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the number of command line arguments
 * @argc: number of arguments passed to the program
 * @argv: array of argument strings
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i, sum = 0;
	(void)argc;
	(void)argv;

	{
		for (i = 1 ; i < argc ; i++)
		{
		sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

		if (argc <= 1)
	{
		putchar('\n');
	}
		if (!isdigit(argc))
	{
		return (0);
	}

	return (0);
}
