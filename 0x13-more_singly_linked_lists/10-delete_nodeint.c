#include "lists.h"

/**
 * delete_nodeint_at_index - Function deletes node at inde of a list.
 * @head: A pointer to the address of the at the head of the list.
 * @index: The index of list where the new node is inserted.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currnt, *prev, *temp_p;
	unsigned int i = 0;

	currnt = *head;
	prev = currnt;

	if ((*head) && index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}

	while (currnt)
	{
		temp_p = currnt;

		if (i == index)
		{
			prev->next = currnt->next;
			free(currnt);
			return (1);
		}
		currnt = currnt->next;
		prev = temp_p;
		i++;
	}

	return (-1);
}
