#include <stdio.h>
#include "main.h"

/**
 * largest_number - Prints the largest integer
 * @a: First integer
 * @b: Second integer
 * @c: Third integer
 * Return: 0
*/

int largest_number(int a, int b, int c)
{
	int a, b, c;
	int largest;

	if (a > b && a > c)
	printf("%d is the largest number\n", a);

	if (b > a && b > c)
	printf("%d is the largest number\n", b);

	if (c > a && c > b)
	printf("%d is the largest number\n", c)

	return (0);
}
