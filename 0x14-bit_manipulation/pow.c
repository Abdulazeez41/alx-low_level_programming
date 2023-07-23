#include "main.h"

/**
 * _pow - raise to the power
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int result;
	unsigned int i;

	result = 1;
	i = 1;
	while (i <= power)
	{
		result *= base;
		i++;
	}
	return (result);
}
