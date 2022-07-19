#include "lists.h"

/**
 * sum_listint - print of element in the node
 * @head: a linked lists
 * Return: sum
 */


int sum_listint(listint_t *head)
{
	int total = 0;

	if (head->next == NULL)
		return (0);

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
