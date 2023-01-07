#include "main.h"

/**
 * _strlen_recursion - This will output the length of a given string
 * @s: input string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

}
