#include  "main.h"
/**
 * _isupper - Function that checks for uppercase
 * @c: An input char
 * Return: 1 for upper, 0 for other
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
