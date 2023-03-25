#include "main.h"

/**
 *	print_diagonal - Print number of lines diagonally
 *	@n: int data input
 *	Return 0 if run sucessful
 */
void print_diagonal(int n)
{
	while (n > 0)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('\\');
			_putchar('\n');
			n--;
		}
	}
	_putchar('\n');
}
