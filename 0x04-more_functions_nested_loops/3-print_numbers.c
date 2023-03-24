#include "main.h"

/**
 *	print_numbers - Print numbers serially from 0 - 9
 *	Return: 0 if run successful
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('0'+ i);
		i++;
	}
	_putchar('\n');
}
