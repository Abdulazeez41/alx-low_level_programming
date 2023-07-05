#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node in linked list
 * @head: listint_t
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);
}
