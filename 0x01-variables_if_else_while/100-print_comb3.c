#include <stdio.h>
/**
 * main - Prints possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 48 ; x < 58 ; x++)
	{
	for (y = 48 ; y < 58 ; y++)
	{
	if (x == y || y<= x)
	{}
	else 
	{
		putchar(x);
		putchar(y);
	if (x == 56 && y == 57)
	{}
	else
	{
		putchar(44);
		putchar(' ');
	}
	}
	}
	}
	putchar('\n');

	return (0);
}
