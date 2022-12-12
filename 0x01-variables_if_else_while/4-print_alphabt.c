#include <stdio.h>
/**
 * main - Print alphadets with exceptions in lowercase
 * Return: 0
 */
int main(void)
{
	char y;

	for (y = 'a' ; y <= 'z' ; y++)
	if (y != 'e' && y != 'q')
	putchar(y);
	putchar('\n');

	return (0);
}
