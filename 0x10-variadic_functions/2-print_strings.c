#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: char
 * @n: unsigned int
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list valist;

	va_start(valist, n);
	while (i < n)
	{
		str = va_arg(valist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(valist);
}
