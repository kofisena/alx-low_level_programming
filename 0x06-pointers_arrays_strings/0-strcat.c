#include "main.h"

/**
 * *_strcat - this function will concat the the string @src
 * @dest: the pointer to the concat string
 * @src: the string
 * Return: The pointer to the @dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
