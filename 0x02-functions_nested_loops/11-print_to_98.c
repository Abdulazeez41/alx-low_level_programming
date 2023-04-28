#include <stdio.h>
#include "main.h"

/**
 *	print_to_98 - Print all natural numbers from n to 98
 *	@n: integer input
 *	Return: Void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("\n");
}

