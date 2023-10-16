#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - compies a string from src to dest
 * @src: string source
 * @dest: destination of string
 *
 * Return: returns a pointer to new alloc mem
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

/**
 * _strlen - calculates the length of a string
 * @str: string argument
 *
 * Return: returns the length of a string
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * new_dog - a function that creates a new dog
 * @name: char argument
 * @age: float argument
 * @owner: char argument
 *
 * Return: NULL or pointer to new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nw_dog;

	nw_dog = malloc(sizeof(dog_t));
	if (nw_dog == NULL || name == NULL || owner == NULL)
		return (NULL);

	nw_dog->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (nw_dog->name == NULL)
	{
		free(nw_dog);
		return (NULL);
	}
	_strcpy(nw_dog->name, name);

	nw_dog->age = age;

	nw_dog->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (nw_dog->owner == NULL)
	{
		free(nw_dog->name);
		free(nw_dog);
		return (NULL);
	}
	_strcpy(nw_dog->owner, owner);

	return (nw_dog);
}
