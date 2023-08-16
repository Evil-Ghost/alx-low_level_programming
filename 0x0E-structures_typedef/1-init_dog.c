#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes struct dog by dereferencing the pointer d
 * @d: pointer to the structure dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
