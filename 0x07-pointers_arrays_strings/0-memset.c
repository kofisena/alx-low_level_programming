#include "main.h"

/**
 * _memset - First n bytes of memory space which is poini to by @s and @c
 * @s: A pointer to the memory area to be filled
 * @b: The char to fill the memory space
 * @n: The number of bytes used
 * Return: A pointer to the filled memory space @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
