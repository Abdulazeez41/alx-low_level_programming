#include "main.h"

/**
 *	more_numbers - Print 0 - 14 into multiple lines
 *	Return: 0 if run successful
 */
void more_numbers(void)
{
	int j, k;

		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			k = j % 10;
			_putchar(k + '0');
		}
		_putchar('\n');
}
