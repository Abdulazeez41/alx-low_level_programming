#include <stdio.h>
#include "main.h"

/**
 *	print_sign - Print sign number
 *	@n: int data input
 *	Return: 1 if less than 0, 0 if n is 0, -1 if less than 0
 */

int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
