#include <stdio.h>
/**
 * main - This is the entry to my program
 * Return: This will return 0
 */

int main(void)
{
	printf("Size of a char: is %i byte(s)\n", sizeof(char));
	printf("Size of integer ia %i byte(s)\n", sizeof(int));
	printf("Size of long int is %i byte(s)\n", sizeof(long int));
	printf("Size of a float is %i byte(s)\n", sizeof(float));
	printf("Size for a long long int is %i bytes(s)", sizeof(long long int));
	return (0);
}
