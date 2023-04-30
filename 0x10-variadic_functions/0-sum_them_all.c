#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums them all
 * @n: unsigned int
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list valist;

	va_start(valist, n);
	while (i < n)
	{
		sum += va_arg(valist, int);
		i++;
	}
	va_end(valist);
	return (sum);
}
