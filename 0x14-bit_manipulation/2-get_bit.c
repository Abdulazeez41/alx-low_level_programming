#include "main.h"

/**
 * get_bit - returns bit
 * @n: number to check bits
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divs, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divs = 1 << index;
	check = n & divs;
	if (check == divs)
		return (1);
	return (0);
}

