#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adding a new node at the end of a linked list
 * @head: head of the nodes
 * @n: nodes
 * Return: address of the new element, NULL if failed
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new_node == NULL)
	{
		return (NULL);
    }

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
    }

	while (last->next != NULL)
	{
		last = last->next;
    }

	last->next = new_node;

	new_node->prev = last;

	return (new_node);
}

