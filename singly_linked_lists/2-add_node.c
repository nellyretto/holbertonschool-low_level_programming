#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adding a new node at the beggining of a linked list
 * @head: functions as a double
 * @str: string to be manipulated
 *
 * Return: address of new element, NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *new_node;
	char *dup_str;
	unsigned int len = 0;

	dup_str = strdup(str);
	if (!dup_str)
		return (NULL);


	while (dup_str[len] != '\0')
		len++;

	new_node = (list_t *)malloc(sizeof(list_t));
		if (!new_node)
	{
			free(dup_str);
			return (NULL);
	}


		new_node->str = dup_str;
		new_node->len = len;
		new_node->next = *head;

		*head = new_node;

	return (new_node);
}

