#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string 1
 * @accept: string 2
 * Return: new value
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		for (y = 0 ; accept[y] != '\0' ; y++)
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
		}
	}

	return (0);
}
