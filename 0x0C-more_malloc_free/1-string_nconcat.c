#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: char
 * @s2: char
 * @n: int
 *
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		while (s1[i])
			i++;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		while (s2[j])
			j++;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	while (k < i)
	{
		s[k] = s1[k];
		k++;
	}
	while (k < i + j)
	{
		s[k] = s2[k - i];
		k++;
	}
	s[k] = '\0';
	return (s);
}
