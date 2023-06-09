#include "main.h"

/**
 *	_print_rev_recursion - print string with reverse recursion
 *	@s: character input
 *	Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
