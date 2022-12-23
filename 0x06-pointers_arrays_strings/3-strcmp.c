#include "main.h"

/**
 * *_strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: value < 0 if one string is less than the other
 * value > 0 if one string is greater than the other
 * 0 if strings are equal
 */

int *_strcmp(char *s1, char *s2)
{
	int counter = 0, comVal;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
		counter++;

	comVal = s1[counter] - s2[counter];

	return (comVal);
}
