#include <stdio.h>

/**
 *	main - Start Program
 *	Return: 0
 */

int main(void)
{
	puts("Size of a char: %s byte(s)\n", sizeof(char));
	puts("Size of an int: %d byte(s)\n", sizeof(int));
	puts("Size of a long int: %d byte(s)\n", sizeof(unsigned int));
	puts("Size of a long long int: %d byte(s)\n", sizeof(long));
	puts("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
