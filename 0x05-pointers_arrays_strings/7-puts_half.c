#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = i / 2;
		if (i % 2 == 0)
		{
			
		}
	 	_putchar(j + '0');
	}
	_putchar('\n');
}
