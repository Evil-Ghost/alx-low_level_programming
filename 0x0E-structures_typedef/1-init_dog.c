#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: structure argument
 * @name: char argument
 * @age: float argument
 * @owner: char argument
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
