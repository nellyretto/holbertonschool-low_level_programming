#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returning nth node to a linked list
 * @head: head of nodes
 *
 * Return: if nodes does not exist return NULL
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return current;
		count++;
		current = current->next;
	}

	return (NULL);
}
