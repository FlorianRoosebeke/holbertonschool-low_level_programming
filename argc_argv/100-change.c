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

	int coin;
	int monney[] = {25, 10, 5, 2, 1};
	int i;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	coin = atoi(argv[1]);

	if (coin < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)

	{
		count += coin / monney[i];
		coin = coin % monney[i];
	}
	printf("%d\n", count);
	return (0);
}



