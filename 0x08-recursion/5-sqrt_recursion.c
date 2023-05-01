#include "main.h"

/**
 * sqrt_check - checks square root
 * @g:int
 * @c: int
 *
 * Return: -1
 */
int sqrt_check(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_check(g + 1, c));
}

/**
 * _sqrt_recursion - natural square root
 * @n: int
 *
 * Return: -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
