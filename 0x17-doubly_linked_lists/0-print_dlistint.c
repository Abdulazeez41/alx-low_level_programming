#include "lists.h"

/**
 * print_dlistint - prints elements of a linked list
 * @h: pointer to head node
 * Return: returns number of nodes in the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	}
	return (count);
}
