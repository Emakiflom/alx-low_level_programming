#include "lists.h"

/**
 * list_len - returns the number of elements in a list one by one.
 * @h: list of the given structure.
 * Return: Number Of the nodes in the list.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
