#include "main.h"

/**
 *	_strlen_recursion - print string length with recursion
 *	@s: character input
 *	Return: void
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	else
	{
		return _strlen_recursion(s + 1);
	}
}
