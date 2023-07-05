#include "lists.h"
#include <stdio.h>

/**
 * print_list - print list
 * @h: list_t
 *
 * Return: unsigned int
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i = 0;

	tmp = h;
	while (tmp)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
