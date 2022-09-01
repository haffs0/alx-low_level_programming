#include "lists.h"

/**
 * dlistint_len - print double linked lists length
 * @h: lists
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
