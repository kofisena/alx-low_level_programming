#include "main.h"
/**
 * strspn - Entry point
 * @s: input
 * @ccept: input
 * Retur: 0
 */

unsigned int _strspn(chhar *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
