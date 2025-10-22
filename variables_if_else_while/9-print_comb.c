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
char number;
number = 47;

while (number != 56)
{
number++;
putchar(number);
putchar(44);
putchar(32);
}
putchar(57);
return (0);
}
