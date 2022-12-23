#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp' counter = 0;

	n = n - 1;

	while (counter <= n)
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;

	return (void)
}
