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
	int i;
	(void)argc;
	(void)argv;

for (i = 0 ; i < argc ; i++)
	{
	  printf("%d\n", argc);
	}
_putchar('\n');
return (0);
}