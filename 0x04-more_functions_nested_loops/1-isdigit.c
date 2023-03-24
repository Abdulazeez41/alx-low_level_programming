#include "main.h"

/**
 *	_isdigit - Checks for upper letters
 *	@c: int data input
 *	Return: 1 if successful else print 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
