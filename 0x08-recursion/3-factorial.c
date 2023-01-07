#include "main.h"

/**
 * factorial - outpus te factorial of a number
 * @n: The number for the factorial
 * Return: output
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
