#include <stdio.h>

/**
 *	main - start program
 *	Return: 0
 */
int main(void)
{
	/* 97 - 122 */
	char a = 97;

	while (a < 123)
	{
		putchar(a++);
	}
	putchar('\n');
	return (0);
}
