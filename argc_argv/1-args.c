#include <stdio.h>
#include"main.h"
/**
 * main - prints the number of command line arguments
 * @argc: number of arguments passed to the program
 * @argv: array of argument strings
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	printf("%d\n", argc - 1);

return (0);
}
