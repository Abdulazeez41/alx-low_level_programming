#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: char
 * @s2: char
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, m, n;
	char *d;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	k = i + j + 1;
	d = malloc(k * sizeof(char));
	if (d == NULL)
		return (NULL);
	m = 0;
	while (m < i)
	{
		d[m] = s1[m];
		m++;
	}
	n = 0;
	while (n < j)
	{
		d[n + i] = s2[n];
		n++;
	}

	d[i + j] = '\0';
	return (d);
}
