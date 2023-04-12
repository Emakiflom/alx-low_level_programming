#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers with min and max value.
 * @min: minimum value of the array.
 * @max: maximum value of the array.
 * Return: pointer to the newly created array.
 * if min > max, returns NULL.
 * if malloc fails, returns NULL.
 */

int *array_range(int min, int max)
{
	int *array;
	int i, j, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0, j = min; j <= max; i++, j++)
		array[i] = j;

	return (array);
}
