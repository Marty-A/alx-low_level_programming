#include <stdio.h>
/**
 * main - Prints all possible different combination of three digits
 * Return: 0
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 48 ; x < 58 ; x++)
	{
	for (y = 48 ; y < 58 ; y++)
	{
	for (z = 48 ; z < 58 ; z++)
	{
	if (x == y || x == z || y == z || y <= x || z <= y)
	{}
	else
	{
		putchar(x);
		putchar(y);
		putchar(z);
	if (x == 55 && y == 56 && z == 57)
	{}
	else
	{
		putchar(44);
		putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');

	return (0);
}
