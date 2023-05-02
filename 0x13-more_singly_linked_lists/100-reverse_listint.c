#include "lists.h"

/**
 * reverse_listint - Function that reverses a linked list.
 * @head: A pointer to the address of the at the head of the list.
 * Return: pointer to the first node in the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
