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
	unsigned int i, j, k;
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

	i = 0;
	while (i < k)
	{
		if (i < (i + j))
			d[i] = s1[i];
		else
			d[i] = s2[i - j];
		i++;
	}

	d[i] = '\0';
	return (d);
}
