#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: pointer to a char to be changed
 * @src: pointer to  char to be changed
 * @n: integer value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
