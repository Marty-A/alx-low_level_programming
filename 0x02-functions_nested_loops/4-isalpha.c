#include "main.h"
/**
 * _isalpha - Checks alphabet char
 * @c: Check char
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
