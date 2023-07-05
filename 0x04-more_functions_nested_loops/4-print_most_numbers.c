#include "main.h"

/**
 *	print_most_numbers - Print numbers serially with the exception of 2 and 4
 *	Return: 0 if run successful
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
			i++;
		}
		else
		{
			i++;
		}
	}
	_putchar('\n');
}
