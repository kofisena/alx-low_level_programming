#include "main."
/**
 * _evaluate - find squaroot
 * @i: number
 * @n: number
 * Return: the squatroo
 */

int _evaluate(int i, int n)
{
if (n == 0 || n == 1)
	return (n);
else if (i * i < n)
	return (_evaluate(i + 1, n));
else if (i * i == n)
	return (i);
return (-1);
return (-1);
return (-1);

}
