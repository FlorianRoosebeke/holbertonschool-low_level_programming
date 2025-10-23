#include "main.h"
/**
 * int _abs(int); _abs -Write a fonction print absolut digit.
 * @x : print number
 *
 * Return: return 1 or 0 cool
 */
int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else if (x > 0)
	{
		return (x);
	}
	else
{
		return (0);
}
}



