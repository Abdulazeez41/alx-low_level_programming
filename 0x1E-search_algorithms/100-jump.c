#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 *               of integers using jump search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 *              Uses the square root of the array size as the jump step.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	/* Check for NULL array or empty size */
	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

	/* Perform the jump search */
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	/* Adjust jump if it exceeds the array size */
	jump = jump < size - 1 ? jump : size - 1;

	/* Search within the identified range */
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	/* Print the last checked value */
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	/* Return the index if value is found, otherwise -1 */
	return (array[i] == value ? (int)i : -1);
}
