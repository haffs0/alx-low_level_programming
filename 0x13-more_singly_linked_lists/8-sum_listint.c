#include "lists.h"

/**
 * sum_listint - print of element in the node
 * @head: a linked lists
 * Return: sum
 */


int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *tmp;

	tmp = head;

	while (tmp != NULL)
	{
		total += tmp->n;
		tmp = tmp->next;
	}

	return (total);
}
