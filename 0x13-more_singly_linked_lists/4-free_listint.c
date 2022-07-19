#include "lists.h"

/**
 * free_listint - free the space in memory
 * @head: linked list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL) 
	{
		tmp = head;
		free(head);
		head = tmp->next;
	}
}
