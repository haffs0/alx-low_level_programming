#include "lists.h"

/**
 * free_listint2 - free the space in memory
 * @head: linked list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
		return;

	while (*head) 
	{
		tmp = *head;
		free(*head);
		*head = tmp->next;
	}
	*head = NULL;
}
