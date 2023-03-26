#include <stdio.h>
#include "main.h"

/**
 *	print_last_digit - Prints last digit value
 *	@i: int data input
 *	Return: 0 if run successful
 */
int print_last_digit(int i)
{
	i = i / 10;
	return ('0' + i);
}
