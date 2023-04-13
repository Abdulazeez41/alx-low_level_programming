#include <stdlib.h>
#include <stddef.h>

/**
 *	create_array - Create an array of characters by allocating a memory
 *	@size: integer input
 *	@c: character input
 *	Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
