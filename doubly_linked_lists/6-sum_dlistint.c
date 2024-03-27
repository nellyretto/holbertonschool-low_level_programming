#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint- returning sum of all data on a linked list
 * @head: head of nodes
 * Return: sum of all data, if list if empty return 0
 *
 */

int sum_dlistint(dlistint_t *head)

{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
