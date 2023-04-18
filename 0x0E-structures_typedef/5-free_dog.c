#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog from cage
 * @d: dog to be freed form cage
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
