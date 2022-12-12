#include <stdio.h>
/**
 * main - Print base 16 numbers in lowercase
 * Return: 0
 */
int main(void)
{
	int x;
	char y;

	for (x = 48 ; x < 58 ; x++)
	putchar(x);
	for (y = 'a' ; y <= 'f' ; y++)
	putchar(y);
	putchar('\n');

	return (0);
}
