#include "main.h"

/**
 * puts2 - print one char out of two
 * @str: input
 * Return: print out the return
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(srt[i]);
		else
			continue;
	}
	_putchar('\n');
}
