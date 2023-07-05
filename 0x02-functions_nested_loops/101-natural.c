#include <stdio.h>

/**
 *	main - Run program
 *
 *	Return: 0
 */
int main(void)
{
	int i, j, k, l, m;

	l = 0;
	for (i = 0; i <= (1024 / 3); i++)
	{
		k = i * 3;
		l = l + k;
	}
	for (j = 0; j <= (1024 / 5); j++)
	{
		if (!(j % 3 == 0))
		{
			m = 5 * j;
			l = l + m;
		}
	}
	printf("%d", l);
	printf("\n");
	return (0);
}
