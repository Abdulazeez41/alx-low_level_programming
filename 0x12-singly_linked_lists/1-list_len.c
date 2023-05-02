#include "lists.h"

/**
 * list_len - linked list length
 * @h: list_t struct
 *
 * Return: int
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int i = 0;

	tmp = h;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
