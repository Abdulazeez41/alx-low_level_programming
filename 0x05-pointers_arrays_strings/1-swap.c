#include "main.h"

/**
 *	swap_int  - swap variables *a with *b
 *	@a: int pointer input
 *	@b: int pointer input
 *	Return: 0 if run successful
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
