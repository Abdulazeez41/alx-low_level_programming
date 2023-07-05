#include "main.h"

/**
 *	_isupper - Checks for upper letters
 *	@c: int data input
 *	Return: 1 if successful else print 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
