#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print linked list data
 * @h: the linked list object
 * Return: number of node
 */

size_t print_list(const list_t *h)
{
	unsigned int n_node = 0;

	while (h != NULL)
	{
		if ((h->str) == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;

		n_node++;
	}

	return (n_node);
}
