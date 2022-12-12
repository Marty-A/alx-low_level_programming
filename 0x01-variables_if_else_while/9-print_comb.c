#include <stdio.h>
/**
 * main - Prints all possible combination of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int y;

	for (y = 48 ; y < 58 ; y++)
	putchar(y);
	if (y != 57)
	putchar(',');
	putchar(' ');

	return (0);
}
