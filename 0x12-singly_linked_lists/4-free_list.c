#include "lists.h"

/**
 * free_list - Frees list fress memory space.
 * @head: head of the list_t list from parameter.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		free(head->str);
		free(head);
		head = temp->next;
	}
}
