#include "main.h"

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divs = _pow(2, sizeof(unsigned long int) * 8 - 1);
	char flg = 0;

	for (; divs != 0; divs >>= 1)
	{
		unsigned long int check = n & divs;

		if (check == divs)
		{
			flg = 1;
			_putchar('1');
		}
		else if (flg == 1 || divs == 1)
		{
			_putchar('0');
		}
	}
}

/**
 * _pow - calculates power
 * @base: base of the exponent
 * @pow: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int pow)
{
	unsigned long int n = 1;

	for (unsigned int i = 1; i <= pow; i++)
		n *= base;

	return (n);
}
