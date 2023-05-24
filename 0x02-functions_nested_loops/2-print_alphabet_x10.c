#include "main.h"

/**
 * print_alphabetx10 - print alpahbet 10 x
 * Return: void
 */

void print_alphabetx10(void)
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
