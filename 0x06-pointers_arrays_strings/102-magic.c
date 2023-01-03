#include <stdio.h>


int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * Write your code here
	 * Note:
	 * Don't use a
	 * Don't modify p
	 * Write only one statement
	 * Don't add any other code
	 */

	*(p + 5) = 98;
	/* ...Prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
