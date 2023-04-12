#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory to the variable.
 * @b: amount of bytes.
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
