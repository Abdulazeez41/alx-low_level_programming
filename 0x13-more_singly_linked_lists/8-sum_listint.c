#include "lists.h"

/**
 * sum_listint - sum of all the element in the list
 * @head: listint_t
 *
 * Return: listint_t
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
