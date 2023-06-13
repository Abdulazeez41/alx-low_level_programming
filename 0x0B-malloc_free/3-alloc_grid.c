#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array
 * @width: int
 * @height: int
 * Return: a double pointer
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **k;

	if (width <= 0 || height <= 0)
		return (NULL);
	k = (int **)malloc(sizeof(int *) * height);
	if (k == NULL)
		return (NULL);
	while (i < height)
	{
		k[i] = (int *)malloc(sizeof(int) * width);
		if (k[i] == NULL)
		{
			j = 0;

			while (j < i)
			{
				free(k[j]);
				j++;
			}
			free(k);
			return (NULL);
		}
		j = 0;

		while (j < width)
		{
			k[i][j] = 0;
			j++;
		}
		i++;
	}
	return (k);
}
