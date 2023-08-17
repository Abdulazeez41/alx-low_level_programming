#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to first node
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
