#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * _square_root -calcul square of a number
 * @n: number to compute the square root of
 * Return: natural square root, or -1 if n < 0 or no natural square root exists
 */
int is_prime_number(int n)
{
n = root_is_prime_number(1, n);
	return (n);
}

int root_is_prime_number(int n, int x)
{


if (n % x == 0)
return (0);

if (n % x != 0)
return (1);

if (n < 2)
return (0);

else
return (root_is_prime_number(n, x - 5));

}

