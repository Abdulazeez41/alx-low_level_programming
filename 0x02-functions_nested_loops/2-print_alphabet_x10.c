#include <stdio.h>
#include "main.h"

/**
 *	print_alphabet_x10 - Entry point
 *
 *	Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 1; i <= 10; i++)
	{
		for (a = 97; a < 123; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}
}
