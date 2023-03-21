#include <stdio.h>

/**
 *	main - Entry Point
 *
 *	Return: 0 if run successful
 */
int main(void)
{
	char i = 48;
	char j = 97;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
