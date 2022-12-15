#include "main.h"
/**
 * print_last_digit - Print last digit of a number
 * @n: number
 * Return: int value
 */
int print_last_digits(int n)
{
	int y;

	x = n % 10;

	if (x < 0)
	x = x * -1;
	_putchar(x + '0');

	return (x);
}
