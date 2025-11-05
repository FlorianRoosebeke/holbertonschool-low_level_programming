#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of command line arguments
 * @argc: number of arguments passed to the program
 * @argv: array of argument strings
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i, mul = 1;
	(void)argc;
	(void)argv;

	for (i = 1 ; i < argc ; i++)
	{
	mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);

return (0);
}
