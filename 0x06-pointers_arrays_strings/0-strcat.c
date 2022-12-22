#include "main.h"

/**
 * strcat - this function will concat the the string @src
 * @dest: the pointer to the concat string
 * @src: the string
 * Return: The pointer to the @dest
 */

char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])

		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);

}
