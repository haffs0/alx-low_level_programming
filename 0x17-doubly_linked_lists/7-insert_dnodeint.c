#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at an index
 * @h: pointer to double linked lists
 * @idx: the index
 * @n: data
 * Return: the new address or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new, *prev_ptr;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (current == NULL)
		return (NULL);

	for ( ; idx != 0; idx--)
	{
		prev_ptr = current;
		current = current->next;
	}

	new->next = current;
	current->prev = new;
	new->prev = prev_ptr;
	prev_ptr->next = new;

	return (new);
}
