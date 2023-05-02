#include "lists.h"

/**
 * add_nodeint - Funtion that Adds a new node at the beginning of list.
 * @head: A pointer to the address of the at the head of the list.
 * @n: The integer for the new node to contain the data of the node.
 * Return: The address of the new element/ Null if failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
