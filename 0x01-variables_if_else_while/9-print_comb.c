#include <stdio.h>

/**
 *	main - Entry Point
 *
 *	Return: 0 if run successful
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
