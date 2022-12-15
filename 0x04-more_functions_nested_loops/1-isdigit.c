#include "main.h"

/**
 * _isdigit - see if the numbers are betwwen 0 and 9
 * @c: char will check
 * Return: 0 or 1
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
	return (1);
else
	return (0);
}
