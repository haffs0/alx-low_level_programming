#include "lists.h"

/**
 * free_listint2 - free the space in memory
 * @head: linked list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
