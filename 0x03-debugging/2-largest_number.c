#include <stdio.h>
#include "main.h"

/**
 * main - Prints the largest of 3 integers
 * Return: 0
*/

int main(void)
{
	int a, b, c;
	int largest;

	largest = largest_number(a, b, c);

	do printf("%d is the largest number\n", largest);
	while (a > b && a > c);
	{
		largest = a;
	}

	do printf("%d is the largest number\n", largest);
	while (b > a && b > c);
	{
		largest = b;
	}

	do printf("%d is the largest number\n", largest);
	while (c > a && c > b);
	{
		largest = c;
	}

	return (0);
}
