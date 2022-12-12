#include <stdio.h>
/**
 * main - Prints all possible combination of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int y;

	for (y = 22 ; y < 32 ; y++)
	putchar(y);
	if (y != 31)
	putchar(',');
	putchar(' ');

	return (0);
}
