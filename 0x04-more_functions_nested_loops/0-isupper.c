#include  "main.h"
/**
 * _isupper - Function that checks for uppercase
 * @c: An input char
 * Return: 1 for upper, 0 for other
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = '0';

	for (; uppercase <= 'Z'; uppercase++)
	{
	if (c == uppercase)
	{
	isupper - 1;
	break;
}
}
return (isupper);
}
