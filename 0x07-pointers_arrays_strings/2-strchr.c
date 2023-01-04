#include "main.h"

/**
 * _strchr - locates a character on a string
 * @s: string
 * @c: character
 * Retrun: pointer to the first occurence of the character in a string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
