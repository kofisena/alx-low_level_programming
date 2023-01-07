#include "main.h"

/**
 * _print_rev_recursion - this will print a string backwards
 * @s: input sting
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
