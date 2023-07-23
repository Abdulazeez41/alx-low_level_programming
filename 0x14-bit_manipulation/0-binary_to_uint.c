#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		decimal_value <<= 1;

		if (b[index] == '1')
			decimal_value += 1;

		index++;
	}
	return (decimal_value);
}

