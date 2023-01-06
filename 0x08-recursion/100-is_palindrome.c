#include "main.h"

int checker(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	return (1);

	return (checker(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: result
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);

	else
	return (1 + _strlen_recursion(s + 1));
}

/**
 * checker - checks characters
 * @s: string
 * @len: length
 * @i: iterator
 * Return: 1 if character, 0 otherwise
 */

int checker(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	return (0);

	if (i >= len)
	return (1);

	return (checker(s, i + 1, len - 1));
}
