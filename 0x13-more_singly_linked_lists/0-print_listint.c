#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all in listint_t list.
 * @h: listint_t
 *
 * Return: int
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
