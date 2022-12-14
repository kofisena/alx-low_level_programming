#include "main.h"

/**
 * _isalpha - finds the char in alphabet
 * @c: the char would be checked
 * Return: 1 if char is lower or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && 'A' <= 'Z'))
		return (1);
	else
		return (0);
}

