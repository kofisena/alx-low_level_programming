#include "main.h"

/**
 * reverse_array - this will reserve array of integers
 * @a: input array a
 * @n: number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
