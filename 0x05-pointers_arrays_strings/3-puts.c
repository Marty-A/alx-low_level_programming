#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string ff by a new line
 * @str: string
 * Return: 0
 */
int _puts(char *str)
{
	if (*str != '\0' && str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
