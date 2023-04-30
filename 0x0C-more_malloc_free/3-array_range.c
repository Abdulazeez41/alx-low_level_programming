#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: int
 * @max: int
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i;
	int j;
	int *p;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	p = malloc(sizeof(int) * j);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < j; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
