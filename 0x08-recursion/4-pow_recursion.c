#include "main.h"

/**
 *	_pow_recursion - print out the raise to the power
 *	@x: integer input
 *	@y: integer input
 *	Return: -1 if encountered error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
