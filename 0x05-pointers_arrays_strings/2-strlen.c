#include "main.h"
#include <stdio.h>

/**
 * _strlen - prints length of a string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int x = 0;

	for (*s != '\0' && s++)
	{
		x++;
	}
	return (x);
}
