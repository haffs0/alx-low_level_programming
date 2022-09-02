#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at the index
 * @head: double linked lists
 * @index: index of the node to return
 * Return: node on success or NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (n != index)
	{
		head = head->next;
		n += 1;
	}

	if (n == index)
		return (head);

	return (NULL);
}
