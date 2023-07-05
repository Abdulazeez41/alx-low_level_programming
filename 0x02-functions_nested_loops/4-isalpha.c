#include <stdio.h>
#include "main.h"

/**
 *	_isalpha - checks for uppercase or lowercase
 *	@c: int variable
 *
 *	Return: 0 if run successful
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);

}
