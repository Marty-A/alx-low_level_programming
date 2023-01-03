#include <stdio.h>

/**
 * main - main code
 * Return: 0
 */

int main(void)
{
	int n, a[5], *p;

	a[2] = 1024;
	p = &n;

	*(p + 5) = 98;
	/* Prints 98\n */
	printf("a[2] = %d\n", a[2]);

	return (0);
}
