#include "lists.h"

/**
 * listint_len - print count of node
 * @h: a pointer to a linked list
 * Return: a linked list
 */


size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
