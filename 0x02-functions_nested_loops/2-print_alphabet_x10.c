#include "main.h"

/**
 * print_alphabet_x10 - print alpahbet 10 x
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alpha;

	int i = 0;

while (i <= 9)
	{
	for (alpha = 'a'; alpha <= 'z'; alpha++)

	{
	_putchar(alpha);
	_putchar('\n');

	i++;
	}
	}
}
