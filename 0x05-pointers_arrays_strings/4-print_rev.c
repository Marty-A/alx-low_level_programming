#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @s: string
 */

void print_rev(har *s)
{
	int x = 0;

	if (s[x] && x++)
	{
		x--;
		_putchar(s[x]);
	}
	_putchar('\n');
}
