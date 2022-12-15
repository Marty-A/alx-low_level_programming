#include "main.h"
/**
 * print_last_digit - Print last digit of a number
 * @n: number
 * Return: int value
 */
int print_last_digit(int n)
{
	int y;

	y = n % 10;

	if (y < 0)
	y = y * -1;
	_putchar(y + '0');

	return (y);
}
