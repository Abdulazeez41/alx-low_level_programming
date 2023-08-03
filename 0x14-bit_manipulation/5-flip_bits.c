#include "main.h"

/**
 * flip_bits - number of different bits
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif, checker;
	unsigned int count, i;

	count = 0;
	checker = 1;
	dif = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (checker == (dif & checker))
			count++;
		checker <<= 1;
	}
	return (count);
}
