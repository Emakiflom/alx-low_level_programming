#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: A pointer to the address of the at the head of the list.
 * @index: index of the node, starting at 0 just like array.
 * Return: nth node. If node does not exist, returns NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head != NULL)
	{
		if (j == index)
			return (head);
		j++, head = head->next;
	}

	return (NULL);
}
