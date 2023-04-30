#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - print char
 * @c: char
 *
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - prints string
 * @s: string
 *
 * Return: void
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_i - prints int
 * @i: int
 *
 * Return: void
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - prints float
 * @f: float
 *
 * Return: void
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - prints all(c, s, i, f)
 * @format: list of argument
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int j = 0;

	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list valist;
	char *separator = "";

	va_start(valist, format);

	while (format && format[i])
	{
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
