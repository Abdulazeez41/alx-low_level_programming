#include "main.h"

/**
 *	print_square - Print number of lines
 *	@size: int data input
 *	Return 0 if run sucessful
 */
void print_square(int size)
{
	while (size > 0)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{

			_putchar('#');
			size--;
		}
	}
	_putchar('\n');
}
