#include "main.h"

/**
 *	print_line - Print number of lines
 *	@n: int data input
 *	Return 0 if run sucessful
 */
void print_line(int n)
{
	while (n > 0)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
