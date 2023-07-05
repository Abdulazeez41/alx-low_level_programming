#include <stdio.h>
#include "main.h"

/**
 *	print_last_digit - Prints last digit value
 *	@i: int data input
 *	Return: 0 if run successful
 */
int print_last_digit(int i)
{
	int j;
	int k;

	j = i % 10;
	if (j < 0)
	{
		j = -j;
	}
	k = '0' + j;
	_putchar(k);
	return (j);
}
