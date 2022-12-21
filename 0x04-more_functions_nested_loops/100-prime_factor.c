#include <stdio.h>
#include <math.h>

/**
 * main - main
 * Return: 0
 */

int main(void)
{
	unsigned int i = 2;
	unsigned long ln = 612852475143;

	while (i != ln)
	{
		if (ln % i == 0)
		ln = ln / i;

		else
		i++;
	}
	printf("%lu\n", n);
	return (0);
}
