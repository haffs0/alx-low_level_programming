#include "lists.h"

/**
 * sum_dlistint - sum up the node lists
 * @head: double linked lists
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
