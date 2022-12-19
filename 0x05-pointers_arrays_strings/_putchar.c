#include <unistd.h>

/**
 * _putchar - writes c to the stdout
 * @c: char will be printed
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
