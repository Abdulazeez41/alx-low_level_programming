#include <stdio.h>
#include "main.h"

/**
 *	print_alphabet - Entry point
 *
 *	Return: void
 */
void print_alphabet(void)
{
	char a = 97;

	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
