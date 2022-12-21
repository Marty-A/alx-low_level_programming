#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * But print Fizz for multiples of three & Buzz for multiples of five
 * Return: 0 Always
 */

int main(void)
{
	int x;

	for (x = 1 ; x < 101 ; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			if (x % 3 == 0)
			printf("Fizz");

			if (x % 5 == 0)
			printf("Buzz");
		}

		else
		printf("%d", x);

		if (x != 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
