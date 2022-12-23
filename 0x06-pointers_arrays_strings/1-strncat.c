#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes to concatenate
 * Return: pointer to designated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, x;

	length = 0;

	while (dest[length] != '\0')
		length++;

	for (x = 0; x < n && src[x] != '\0'; x++, length++)
		dest[length] = src[x];

	dest[length] = '\0';

	return (dest);

}
