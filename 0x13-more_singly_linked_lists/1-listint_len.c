#include "lists.h"

/**
 * listint_len - number of elements
 * @h: listint_t
 *
 * Return: int
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
