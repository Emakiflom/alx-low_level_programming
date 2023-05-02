#include "lists.h"

/**
 * print_listint_safe - Function that prints the list.
 * @head: A pointer to the address of the at the head of the list.
 * Return: number the nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num1 = 0;
	long int diffrent;

	while (head)
	{
		diffrent = head - head->next;
		num1++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diffrent > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num1);
}
