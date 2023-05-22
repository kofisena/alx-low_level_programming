#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main Entry into the program
 * Return: 0
 */

int main(void)
{

	char i, j, k;

	j = 'e';
	k = 'q';

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i != j && i != k)
	putchar(i);
	}
	putchar('\n');

	return (0);
}
