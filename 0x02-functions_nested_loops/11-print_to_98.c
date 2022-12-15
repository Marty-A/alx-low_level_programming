#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print all numbers from n to 98
 * @n: Starting number
 * Return: 1 or 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
	printf("%i, ", n);
	n++;
	}

	if (n > 98)
	{
	printf("%i, ", n);
	n--;
	}

	printf("98");
	putchar('\n');
}
