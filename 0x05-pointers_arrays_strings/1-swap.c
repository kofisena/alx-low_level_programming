#include "main.h"

/**
 * swap_int - will swap the values of twi ints
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;

}
