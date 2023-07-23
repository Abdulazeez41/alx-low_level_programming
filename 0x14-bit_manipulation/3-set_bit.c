#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: n to set argument
 * @index: index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask;

	bit_mask = 1 << index;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	else
	{
		*n |= bit_mask;
		return (1);
	}
}
