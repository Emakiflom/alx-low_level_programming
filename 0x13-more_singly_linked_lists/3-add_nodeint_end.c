#include "lists.h"

/**
 * add_nodeint_end - Function that adds new node at the end of a list.
 * @head: A pointer to the address of the at the head of the list.
 * @n: The integer for the new node to contain the data of the node.
 * Return: The address of the new element/ NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp_p;
	listint_t *new = NULL;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!(*head))
		*head = new;
	else
	{
		temp_p = *head;
		while (temp_p->next != NULL)
			temp_p = temp_p->next;

		temp_p->next = new;
	}

	return (new);
}
