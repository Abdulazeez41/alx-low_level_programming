#include "main.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference;
	unsigned long int check;
	unsigned int i;
	unsigned int count;

	count = 0;
	check = 1;
	difference = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if ((difference & check) != 0)
			count++;
		check <<= 1;
	}
	return (count);
}
