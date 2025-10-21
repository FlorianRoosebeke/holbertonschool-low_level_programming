#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: assign a random number to the variable
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ascii;

	ascii = 96;

	while (ascii != 122)
{
		ascii++;
		if (ascii == 101)
			continue;
		if (ascii == 113)
			continue;
		putchar(ascii);
}
		return (0);
	}
