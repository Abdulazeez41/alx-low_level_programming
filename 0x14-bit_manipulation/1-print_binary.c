#include "main.h"

/**
 * print_binary - prints n in binary
 * @n: no to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int check;
	unsigned long int divisor;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}

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
