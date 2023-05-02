#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - length of string
 * @str: char
 *
 * Return: int
 */
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - adds node
 * @head: list_t
 * @str: char
 *
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
