#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: no to check bits
 * @index: index
 *
 * Return: value of bit, or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divs;
	unsigned long int check_bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	divs = 1 << index;
	check_bit = n & divs;

	if (check_bit == divs)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
