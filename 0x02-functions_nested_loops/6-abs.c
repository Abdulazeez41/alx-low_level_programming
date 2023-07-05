#include <stdio.h>
#include "main.h"

/**
 *	_abs - Computes an absolute value
 *	@i: int data input
 *	Return: 0 if run successful
 */
int _abs(int i)
{
	/*int i;*/

	if (i < 0)
	{
		i = -i;
		return (i);
	}
	else if (i > 0)
	{
		return (i);
	}
	else
		return (0);
}
