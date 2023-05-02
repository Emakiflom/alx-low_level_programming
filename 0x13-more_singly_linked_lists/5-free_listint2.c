#include "lists.h"

/**
 * free_listint2 - Function that frees a list and sets the head to NULL.
 * @head: A pointer to the address of the at the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_p;

	if (head == NULL)
		return;

	while (*head)
	{
		temp_p = (*head)->next;
		free(*head);
		*head = temp_p;
	}

	*head = NULL;
}
