#include <unist.h>

/**
 * _putchar - print character to standard output
 * @character: input variable
 * Return: 0
 */

int _putchar(char character)
{
	return (write(1, &character, 1));
}
