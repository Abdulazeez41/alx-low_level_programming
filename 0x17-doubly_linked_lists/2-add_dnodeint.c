#include "lists.h"

/**
 * add_dnodeint - adds a node to the list
 * @head: head pointer
 * @n: node data
 * Return: pointer to a new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	newnode->next = *head;
	(*head)->prev = newnode;
	*head = newnode;
	return (*head);
}
