#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - freeing a linked list
 * @head: funcitons as a pointer
 *
 * Return: returning new node
 */

void free_list(list_t *head)

{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

