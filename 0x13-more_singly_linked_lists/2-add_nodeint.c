#include "lists.h"

/**
 * add_nodeint - add node to the lists
 * @head: address of the node to be added
 * @n: element of the node
 * Return: a pointer to a linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
