#include <stdio.h>
#include <stdlib.h>

/**
 * main - The “Fizz-Buzz test” program that prints numbers from 1 to 100.
 *
 * Description: For multiples of three, print "Fizz" instead of the number,
 * for multiples of five print "Buzz", and for numbers which are multiples
 * of both three and five print "FizzBuzz".
 *
 * Return: Always 0.
 */

int main(void)
{
	int nbre;

	for (nbre = 1; nbre <= 100; nbre++)
	{
		if (nbre % 3 == 0 && nbre % 5 == 0)
		{
			printf("FizBuzz ");
		}
		else if (nbre % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (nbre % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", nbre);
		}
	}
	printf("\n");
	return (0);
}
