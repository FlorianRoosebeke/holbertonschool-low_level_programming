#include "main.h"
/**
 * jack_bauer :Write a function that prints every minute of the day of Jack Bauer
 * @r : modulo 10
 * Return: return 1 or 0 cool
 */

void jack_bauer(void)
{
	char dh, h, dmin, min;

	for (dh = '0'; dh <= '2'; dh++)
	{
		for (h = '0'; h <= '9'; h++)
		{
			if (dh == '2' && h > '3')
				break;

			for (dmin = '0'; dmin <= '5'; dmin++)
			{
				for (min = '0'; min <= '9'; min++)
				{
					_putchar(dh);
					_putchar(h);
					_putchar(':');
					_putchar(dmin);
					_putchar(min);
					_putchar('\n');
				}
			}
		}
	}
}
