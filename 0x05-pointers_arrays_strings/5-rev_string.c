#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int e, n, t;
	char x;

	n = 0;
	t = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	t = n - 1;
	
	for (e = 0 ; e < n / 2 ; e++)
	{
		x = s[e];
		s[e] = s[t];
		s[t--] = x;
	}
}

