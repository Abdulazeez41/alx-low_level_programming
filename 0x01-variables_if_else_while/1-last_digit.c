#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *	main - start program
 *	Return: 0
 */
int main(void)
{
	int n;
	int last_number;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_number = n % 10;
	printf("Last digit of %d ", n);
	if (last_number > 5)
	{
		printf("is %d and is greater than 5", last_number);
	} else if (last_number == 0)
	{
		printf("is %d and is 0", last_number);
	} else if (last_number < 6 && !last_number == 0)
		printf("is %d and is less than 6 and not 0", last_number);

	printf("\n");
	return (0);
}
