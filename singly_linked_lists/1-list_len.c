#include <stdio.h>
#include "lists.h"

/**
 * list_len - returning numbers of elements of a linked list
 * @h: this is referring to the head of the node
 *
 * Return: number of elements
 *
 */

size_t list_len(const list_t *h)

{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}


