#include <stdio.h>
#include "main.h"

/**
 *	_isLower - Check for lower case letters
 *	@c : int variable
 *	Return: 0 if run successful
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
