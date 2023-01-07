#include "main.h"
#include <unistd.h>

/**
 * _putchar
 * @c: input
 * Return: 1 or - on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
