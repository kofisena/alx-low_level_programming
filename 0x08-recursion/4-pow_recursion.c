#include "main.h"

/**
 * _pow_recursion - output the value of x to the power
 * @x: the base number
 * @y: the power number
 * Return: power recursio
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
