#include "main.h"

/**
 * *_strcat - this function will concat the the string @src
 * @dest: the pointer to the concat string
 * @src: the string
 * Return: The pointer to the @dest
 */

char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0')
		i++;

	do {
		a++;

		dest[i] = src[a];
			i++;

	} while (src[a] != '\0');

	return (dest);
}
