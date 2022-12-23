#include "main.h"

/**
 * *string_toupper - changes lowercase letters of a string to uppercase
 * @string: string
 * Return: Uppercase string
 */

char *string_toupper(char *string)
{
	int length = 0;

	while (string[length] != '\0')
	{
		if (string[length] >= 97 && string[length] <= 122)
		{
			string[length] = string[length] - 32;
		}
		length++;
	}
	return (string);
}
