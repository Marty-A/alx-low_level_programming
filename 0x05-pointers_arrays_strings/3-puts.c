#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string ff by a new line
 * @str: string
 * Return: 0
 */
void _puts(char *str)
{
	for (; *str != '\0' ; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
	return (0);
}
