#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all data in list.
 * @head: A pointer to the address of the at the head of the list.
 * Return: sum of all the data (n).
 */

int sum_listint(listint_t *head)
{
	int sum_of_n = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum_of_n += head->n;
		head = head->next;
	}

	return (sum_of_n);
}
