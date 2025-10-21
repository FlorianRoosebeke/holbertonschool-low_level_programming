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
int digit = -1;

while (digit != 9)
{
digit++;
printf("%d", digit);
}
putchar('\n');
return (0);
}
