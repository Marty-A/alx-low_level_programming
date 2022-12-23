#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @string: string
 * Return: string
 */

char *cap_string(char *string)
{
	int count = 0;

	while (string[count] != '\0')
	{
		if (string[0] >= 97 && string[0] <= 122)
		{
			string[0] = string[0] - 32;
		}

		if (string[count] == ' ' || string[count] == '\t' || string[count] == '\n'
			|| string[count] == ',' || string[count] == ';' || string[count] == '.'
			|| string[count] == '!' || string[count] == '?' || string[count] == '"'
			|| string[count] == '(' || string[count] == ')' || string[count] == '{'
			|| string[count] == '}')

		if (string[count + 1] >= 97 && string[count + 1] <= 122)
		{
			string[count + 1] = string[count + 1] - 32;
		}
		count++;
	}
	return (string);
}
