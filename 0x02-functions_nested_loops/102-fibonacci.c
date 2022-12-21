#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int i = 0;
	long int a = 0, b = 1, c;

	while (i < 50)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%ld", c);

		if (i < 49)
		{
			printf(",");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
