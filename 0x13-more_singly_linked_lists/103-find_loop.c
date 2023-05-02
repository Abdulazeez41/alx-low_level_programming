#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: listint_t
 *
 * Return: listint_t
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *frog, *snail;

	frog = snail = head;
	while (frog && snail && snail->next)
	{
		frog = frog->next;
		snail = snail->next->next;
		if (frog == snail)
		{
			frog = head;
			break;
		}
	}
	if (!frog || !snail || !snail->next)
		return (NULL);
	while (frog != snail)
	{
		frog = frog->next;
		snail = snail->next;
	}
	return (snail);
}
