#include "main.h"

/**
* print_numbers -Write a function that prints the numbers 0 at 9 followed \ n
* Return: Always 0.
*/

void print_numbers(void)
{
int n;

for (n = '0' ; n <= '9' ; n++)
{
	_putchar(n);
}
_putchar('\n');
}
