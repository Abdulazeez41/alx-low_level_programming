#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *	main - Start program
 *	Return: 0
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i > 0)
	{
		printf("%d is positive", i);
	} else if (i == 0)
	{
		printf("%d is zero", i);
	} else
		printf("%d is negative", i);

	printf("\n");
}
