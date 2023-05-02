#include "lists.h"

/**
 * find_listint_loop - Function that finds the loop in a list.
 * @head: A pointer to the address of the at the head of the list.
 * Return: Address of the node where the loop beagn.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_t = head;
	listint_t *fast_t = head;

	if (!head)
		return (NULL);

	while (slow_t && fast_t && fast_t->next)
	{
		fast_t = fast_t->next->next;
		slow_t = slow_t->next;
		if (fast_t == slow_t)
		{
			slow_t = head;
			while (slow_t != fast_t)
			{
				slow_t = slow_t->next;
				fast_t = fast_t->next;
			}
			return (fast_t);
		}
	}

	return (NULL);
}
