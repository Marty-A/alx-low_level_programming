#include "main.h"
/**
 * print_alphabet_x10 - Print lowercase alphabets 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char x;
	int y = 1;

	if (y <= 10)
	{

	for (x = 'a' ; x <= 'z' ; x++)
		_putchar(x);
	_putchar('\n');
	}
	y++;
}
