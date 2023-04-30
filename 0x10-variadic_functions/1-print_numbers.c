#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: char
 * @n: unsigned int
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int num;
	va_list valist;

	va_start(valist, n);
	while (i < n)
	{
		num = va_arg(valist, int);
		printf("%d", num);
		if (i < n - 1 && separator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(valist);
}
