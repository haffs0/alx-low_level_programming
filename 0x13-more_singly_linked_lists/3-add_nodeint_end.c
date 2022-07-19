#include "lists.h"

/**
 * add_nodeint_end - add node to the lists
 * @head: address of the node to be added
 * @n: element of the node
 * Return: a pointer to a linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
		return (new);
	}
}
