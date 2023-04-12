#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		array[i] = 0;

	return (array);
}
