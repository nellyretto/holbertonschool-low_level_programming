#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Freeing a linked list
 * @head: head of nodes
 * Return: returning new nodes
 *
 */

void free_dlistint(dlistint_t *head)

{
	dlistint_t *current = head;
	dlistint_t *next_node = NULL;

	while (current != NULL)
    {
		next_node = current->next;
		free(current);
		current = next_node;
    }
}
