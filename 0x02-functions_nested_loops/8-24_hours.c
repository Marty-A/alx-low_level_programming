#include "main.h"
/**
 * jack_bauer - Print every minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
	int x = 0;
	int y = 0;

	while (x < 24)
	{
	while (y < 60)
	{
		_putchar((x / 10) + '0');
		_putchar((x % 10) + '0');
		_putchar((y / 10) + '0');
		_putchar((y % 10) + '0');
		_putchar('\n');
		y++;
	}
	x++;
	}
}
