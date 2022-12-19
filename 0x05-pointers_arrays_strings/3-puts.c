#include "main.h"

/**
 * _puts - will printout the string
 * @str: string to be print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++)
	}
	_putchar('\n');

}
