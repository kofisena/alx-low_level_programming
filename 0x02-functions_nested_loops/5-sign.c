#include "main.h"

/**
 * print_sign - will print the sign of number
 * @n: the number to be checked
 * Return: 1 or 0 otherwise
 * -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{	_putchar('+');
		return (1);
	}
	else if (n == 0)
	{	_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
