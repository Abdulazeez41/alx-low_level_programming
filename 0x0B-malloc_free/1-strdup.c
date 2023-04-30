#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string to a newly allocated memory space
 * @str: char
 * Return: pointer 
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int j = 0;
	char *d;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	i++;

	d = malloc(i * sizeof(char));

	if (d == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		d[j] = str[j];
	}

	return (d);
}
