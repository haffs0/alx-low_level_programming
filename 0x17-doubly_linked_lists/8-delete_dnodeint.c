#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a position
 * @head: pointer to a linked lists
 * @index: index of node
 * Return: 1 on success or -1 pn failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *next, *prev_ptr;

	if (current == NULL)
		return (-1);

	for ( ; index != 0; index--)
	{
		prev_ptr = current;
		current = current->next;
	}

	next = current->next;
	prev_ptr->next = next;
	next->prev = prev_ptr;

	return (1);
}
