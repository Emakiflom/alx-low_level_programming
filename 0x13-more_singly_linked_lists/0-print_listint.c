#include "lists.h"

/**
 * print_listint - a function that Prints all elements of the list.
 * @h: pointer to head of the list or that pointes to the first node.
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}

	return (j);
}
