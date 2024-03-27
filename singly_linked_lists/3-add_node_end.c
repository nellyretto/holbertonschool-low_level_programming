#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_note_end - adding a new node to the end of a list
 * @head: head of the node
 * @str: string to be manipulated
 *
 * Return: address of the new element, NULL if fail
 *
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
