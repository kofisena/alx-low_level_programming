#include "main.h"

/**
 * print_diaonal - prints diagonal line n number of times
 * @n: times diagonal line is printed
 * Return: void
 */

void print_diagonal(int n)
{

	int i, j;

	for (0, i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
