#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars & initializes it
 * @size: unsigned int
 * @c: char 
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *d;

	if (size == 0)
		return (NULL);

	d = malloc(size * sizeof(char));
	if (d == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		d[i] = c;
	}

	return (d);
}

