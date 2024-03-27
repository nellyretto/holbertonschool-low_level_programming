#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserting a new node to a given position
 * @h: head of nodes
 * @idx: position of the node
 * @n: nodes
 * Return: address of the new node is it fails return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
	return (NULL);

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		if (*h)
			(*h)->prev = new_node;
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}

	current = *h;
	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	new_node->prev = current;
	if (current->next)
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
