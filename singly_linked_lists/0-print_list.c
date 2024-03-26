#include <stdio.h>
#include "lists.h"

/**
 * print_list - printings all elements of a list with singly linkes
 * @h: this if referring to the head of nodes
 *
 * Return: number of nodes
 *
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		 = h->next;
			nodes++;
		}

	return (nodes);
}
