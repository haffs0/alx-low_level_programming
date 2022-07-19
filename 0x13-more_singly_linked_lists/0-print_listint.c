#include "lists.h"

/**
 * print_listint - print a node value
 * @h: a pointer to a linked list
 * Return: a linked list
 */


size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
