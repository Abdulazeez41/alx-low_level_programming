#include <stdio.h>

/**
 *	main - Entry Point
 *
 *	Return: 0 if rn sucessful
 */

int main(void)
{
	char z = 122;

	while (z >= 97)
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
