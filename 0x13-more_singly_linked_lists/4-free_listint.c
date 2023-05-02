#include "lists.h"

/**
 * free_listint - A function that frees a list.
 * @head: A pointer to the address of the at the head of the list.
 */

void free_listint(listint_t *head)
{
	listint_t *temp_p = head;

	while (head)
	{
		temp_p = temp_p->next;
		free(head);
		head = temp_p;
	}
}
