#include <stdio.h>
/**
 * main - Prints all possible combination of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int y;

	for (y = 0 ; y < 10 ; y++)
	putchar(y);
	if (y != 8)
	putchar(',');
	putchar(' ');

	return (0);
}
