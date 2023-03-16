#include <stdio.h>

/**
 *	main - Start Program
 *	Return: 0
 */

int main(void)
{
	printf("Size of a char: %s byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(unsigned int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
