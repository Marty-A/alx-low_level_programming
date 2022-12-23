#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: s
 */

char *leet(char *s)
{
	int count = 0, x;
	int lowercase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (x = 0 ; x < 5 ; x++)
		{
			if (*(s + count) == lowercase[x] || *(s + count) == uppercase[x])
			{
				*(s + count) = numbers[x];
				break;
			}
		}
		count++;
	}
	return (s);
}
