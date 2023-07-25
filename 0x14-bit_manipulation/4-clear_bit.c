#include "main.h"

/**
 * clear_bit - sets the value of a bit
 * @n: no to set
 * @index: index
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~(1 << index);
	*n = *n & mask;

	if (index < sizeof(unsigned long int) * 8)
		return (1);
	else
		return (-1);
}
