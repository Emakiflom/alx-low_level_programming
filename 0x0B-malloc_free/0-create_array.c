#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars for test.
 * @size: contains size of the array.
 * @c: storaged char to collect one by one
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *car;
	unsigned int i;

	if (size == 0)
		return (NULL);

	car = malloc(sizeof(c) * size);

	if (car == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		car[i] = c;

	return (car);
}
