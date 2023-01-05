/*
 * File: 0-memset.c
 * Auth: none
 */

#include "main.h"

/**
 * _memset -First n bytes of memory space which is pointed to by @s and @c
 * @s: A pointer to the memory area to be filled
 * @c: The char to fill the memory space
 * @n: The number of bytes used
 * description _memset:something
 * Return: A pointer to the filled memory space @s
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
