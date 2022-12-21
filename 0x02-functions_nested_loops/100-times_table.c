#include "main.h"

/**
 * print_times_table - prints times table
 * @n: times table
 * Return: 0
 */

void print_times_table(int n)
{
	int x = 0, y, z;

	if (n < 0|| n > 15)
	return;

	while (x <= n)
	{
		for (y = 0 ; y <= n ; y++)
		{
			z = x * y;
			if ( == 0)
			{
				_putchar('0' + z);
			} else if (z < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0');
			} else if (z < 100)
			{
				_putchar(' ');
				_putchar('0' + z / 10);
				_putchar('0' + z % 10);
			} else
			{
				_putchar('0' + z / 100);
				_putchar('0' + (z - 100) / 10);
				_putchar('0' + z % 10);
			} if(y < n)
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
		x++;
	}
}
