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
	char cha;

	for (cha = 'a' ; cha <= 'z' ; cha++)

		putchar(cha);

	for (cha = 'A' ; cha <= 'Z' ; cha++)

		putchar(cha);
	putchar('\n');

	return (0);
}
