#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Assign random number to n
 * Return: 0
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = (n % 10);

	if (n > 5)
	printf("Last digit of %d is %u and is greater than 5\n", n, i);
	if (n == 0)
	printf("Last digit of %d is %u and is 0\n", n, i);
	if (n > 0 && n < 6)
	printf("Last digit of %d is %u and is less than 6 and not 0\n", n, i);
	return (0);
}
