#include "main.h"

/**
 * print_diagsums - prints the sum of 2 diagonals of a square matrix
 * @a: array to be used
 * @size: size of diagonal
 */

void print_diagsums(int *a, int size)
{
	int x, d1 = 0, d2 = 0;

	for (x = 0 ; x < size ; x++)
	{
		d1 += a[(size * x) + 1];
		d2 += a[(size * (x + 1)) - (x + 1)];
	}

	printf("%d, %d\n", d1, d2);
}
