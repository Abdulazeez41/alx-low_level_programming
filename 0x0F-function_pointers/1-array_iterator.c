#include "function_pointers.h"

/**
 * array_iterator - executes a func given as a param on each element of array
 * @array: int
 * @size: size of array
 * @action: pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
