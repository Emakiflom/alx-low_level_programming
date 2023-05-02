#include "lists.h"

/**
 * pop_listint - Function that delete the head node of a list.
 * @head: A pointer to the address of the at the head of the list.
 * Return: If the linked list is empty - 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_p;
	int data_n;

	if (!(*head))
		return (0);

	temp_p = *head;
	data_n = temp_p->n;
	temp_p = temp_p->next;

	free(*head);

	*head = temp_p;

	return (data_n);
}
