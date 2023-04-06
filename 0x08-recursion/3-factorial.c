#include "main.h"

/**
 *	factorial - print factorial of a given number
 *	@n: interger input
 *	Return: -1 if encountered error
 */
int factorial(int n)
{
	if (n <= 0)
	{
		return -1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}
