#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add node head
 * @head: linked list
 * @str: string
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	new_node->str  = strdup(str);
	new_node->len = strlen(str);
	new_node->next = (*head);
	(*head) = new_node;

	if (new_node == NULL)
		return (NULL);
	return (new_node);
}
