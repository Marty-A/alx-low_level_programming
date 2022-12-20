#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: string
 */

void puts_half(char *str)
{
	int e, n, t;

	e = 0;

	while (str[e] != '\0')
	{
		e++;
	}

	if (e % 2 == 0)
	{
		for (t = e / 2 ; str[t] != '\0' ; t++)
		{
			_putchar(str[t]);
		}
	}

	else if (e % 2)
	{
		for (n = (e - 1) / 2 ; n < e - 1 ; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
