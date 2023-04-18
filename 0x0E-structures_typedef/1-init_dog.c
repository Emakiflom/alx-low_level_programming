#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog structure int dog
 * @d: A dog structure representation.
 * @name: The name of the dog just name.
 * @age: The age of the dog just age.
 * @owner: The owner of the dog.
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
