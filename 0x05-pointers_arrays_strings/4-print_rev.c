#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
	x++;
	while (x--)
	_putchar(s[x]);

	_putchar('\n');
}
