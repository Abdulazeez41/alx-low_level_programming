#include <stdio.h>

/**
 *	main - start program
 *	Return: 0
 */
int main(void)
{
	/* 97 - 122 */
	char a = 97;
	char A = 65;

	while (a < 123)
	{
		putchar(a++);
	}

	while (A < 91)
	{
		putchar(A++);
	}
	putchar('\n');
	return (0);
}
