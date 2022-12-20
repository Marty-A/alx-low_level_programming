#include "main.h"
#include <stdio.h>

/**
 * print_array - prints number of elements of an array
 * @a: array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n ; x++)
	{
		if (x == 0 )
		printf("%d", a[x]);
		else
		printf(", %d", a[x]);
	}
	_putchar('\n');
}
