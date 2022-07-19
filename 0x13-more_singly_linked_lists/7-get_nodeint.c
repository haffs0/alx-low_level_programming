#include "lists.h"

/**
 * get_nodeint_at_index - print the element of the node that matched
 * @head: a linked lists
 * @index: index of the node
 * Return: a pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *tmp;

	tmp = head;

	while ((tmp != NULL) && (i != index))
	{
		i++;
		tmp = tmp->next;
	}
	if (i != index)
		return (NULL);
	return (tmp);
}
