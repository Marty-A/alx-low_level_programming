#include "main.h"
/**
 * print_sign - Print sign of number
 * @n: number to check
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	_putchar('+');
	return (1);

	if (n == 0)
	_putchar(48);
	return (0);

	if (n < 0)
	{
	_putchar('-');
	}
	return (-1);
}
