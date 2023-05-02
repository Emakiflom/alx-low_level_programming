#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in list.
 * @h: pointer to head of the list or that pointes to the first node.
 * Return: numbers of elements in list.
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		h = h->next;
		number++;
	}

	return (number);
}
