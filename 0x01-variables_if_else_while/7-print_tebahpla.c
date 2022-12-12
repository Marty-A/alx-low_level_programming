#include <stdio.h>
/**
 * main - Print lowercase alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char v;

	for (v = 'z' ; v >= 'a' ; v++)
	putchar(v);
	putchar('\n');

	return (0);
}
