#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: return a pointer to a new structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_dup = name;
	char *owner_dup = owner;
	dog_t *dog_info;

	dog_info = malloc(sizeof(dog_t));
	if (dog_info == NULL)
	{
		free(dog_info);
		return (NULL);
	}

	dog_info->name = name_dup;
	dog_info->age = age;
	dog_info->owner = owner_dup;

	return (dog_info);
}
