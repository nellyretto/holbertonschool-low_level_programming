#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - returning all numbers of elements in a liked list
 * @h: referring to head of node
 *
 * Return: numbers of elements on a list
 */

size_t dlistint_len(const dlistint_t *h)

{
	size_t count = 0;

	while (h != NULL)
	{
		count++;

		h = h->next;
	}
	return (count);
}
