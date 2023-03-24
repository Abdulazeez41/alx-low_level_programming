#include "main.h"

/**
 *	more_numbers - Print 0 - 14 into multiple lines
 *	Return: 0 if run successful
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
