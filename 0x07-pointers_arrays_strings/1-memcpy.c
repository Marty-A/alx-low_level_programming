#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source area of bytes
 * @n: bytes of the memory
 * Return: destination (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
	dest[x] = src[x];

	return (dest);
}
