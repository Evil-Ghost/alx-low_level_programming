#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * @size: size of the new memory
 * @c: character to initialize the memory with
 *
 * Return: returns a pointer to the array or NULL on fail/size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *new_mem;

	if (size <= 0)
		return (NULL);
	new_mem = malloc(sizeof(char) * size);

	if (new_mem == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		*(new_mem + i) = c;
		i++;
	}

	return (new_mem);
}
