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
	/*
	 * Write your code here.
	 * Note:
	 * Do not use a
	 * Do not modify p
	 * Add only one statement
	 * No other code should be added
	 */

	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);

	return (0);
}
