#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - Function that frees a linked list.
 * @h: pointer to head of the list or that pointes to the first node.
 * Return: number of elements from the freed list.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int diffrenc;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diffrenc = *h - (*h)->next;
		if (diffrenc > 0)
		{
			temp = (*h)->next;
			*h = temp;
			length++;
		}
		else
		{
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
