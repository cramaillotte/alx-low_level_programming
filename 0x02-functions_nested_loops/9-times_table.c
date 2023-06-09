#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: 0
 */

void times_table(void)
{
	int x = 0;
	int y, z;

	while (x < 10)
	{
		y = 0;
		while (y < 0)
		{
			z = x * y;
			if (z > 9)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
				_putchar(' ');
			}
			else
			{
				if (y != 0)
				{
					_putchar(' ');
				}
				_putchar(z + '0');
				_putchar(' ');
			}
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
