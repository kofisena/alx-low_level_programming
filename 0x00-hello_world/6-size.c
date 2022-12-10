#include <stdio.h>
/**
 * main - This is the entry to my program
 * Return: This will return 0
 */

int main(void)
{
	printf("The size of a charater is %i byte(s)\n", sizeof(char));
	printf("The size of integer ia %i byte(s)\n", sizeof(int));
	printf("The size of long int is %i byte(s)\n", sizeof(long int));
	printf("The size of a float is %i byte(s)\n", sizeof(float));
	printf("The size for a long long int is %i ", sizeof(long long int));
	return (0);
}
