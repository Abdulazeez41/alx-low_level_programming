#include "main.h"

/**
 * _strlen - length of string
 * @str: char
 *
 * Return: int
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}

/**
 * check_palindrome - palindrome checker
 * @l: int
 * @r: int
 * @p: char
 *
 * Return: 1 or 0
 */
int check_palindrome(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	else
		return (check_palindrome(l + 1, r - 1, p));
}

/**
 * is_palindrome - palindrome is string or not
 * @s: char
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check_palindrome(0, i, s));
}
