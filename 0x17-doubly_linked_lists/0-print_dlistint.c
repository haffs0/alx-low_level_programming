#include "lists.h"

/**
 * print_dlistint - print double linked lists
 * @h: lists
 * Return: count
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}
	return (count);
}
