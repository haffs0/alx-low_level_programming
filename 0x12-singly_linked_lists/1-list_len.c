#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print linked list data
 * @h: the linked list object
 * Return: number of node
 */

size_t list_len(const list_t *h)
{
	long unsigned int n_node = 0;

	while (h != NULL)
	{
		h = h->next;

		n_node++;
	}

	return (n_node);
}
