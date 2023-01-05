#include "main.h"
#include <unistd.h>

/**
 *
 * _putchar - This will write the char c to standard out
 * @c: This is the char to print
 * Return: 1 when succesful
 * Error, -1 is returned
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
