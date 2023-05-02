#include "lists.h"

/**
 * insert_nodeint_at_index - Functionthat inserts node at given position.
 * @head: A pointer to the address of the at the head of the list.
 * @idx: the index of list where the new node is inserted.
 * @n: The integer for the new node to contain the data of the node.
 * Return: The address of the new node, or NULL if failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current, *prev, *temp_p;
	unsigned int i = 0;

	if (!(*head) && idx != 0)
		return (NULL);

	current = *head;
	prev = current;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = current;
		*head = new;
		return (new);
	}

	while (current)
	{
		temp_p = current;

		if (i == idx)
		{
			new->next = current;
			prev->next = new;
			return (new);
		}
		current = current->next;
		prev = temp_p;
		i++;
	}

	return (NULL);
}
