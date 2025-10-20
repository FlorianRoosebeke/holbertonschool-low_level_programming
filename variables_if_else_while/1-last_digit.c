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
	int n = 0;
	int lastDigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	else if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	else if (n % 10 < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	return (0);
}
