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


	do printf("%d is the largest number\n", largest);
	while (a > b && a > c);

	do printf("%d is the largest number\n", largest);
	while (b > a && b > c);

	do printf("%d is the largest number\n", largest);
	while (c > a && c > b);

	return (0);
}
