#include "main.h"
#include <unistd.h>

/**
 * _putchar - this will input the char c to stdout
 * @c: this will print out the char
 * Return: 1 is return when successful, -1 if there is an error
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
