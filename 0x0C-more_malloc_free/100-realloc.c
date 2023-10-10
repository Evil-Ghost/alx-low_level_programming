#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to old mem
 * @old_size: size of old mem
 * @new_size: size of new mem
 *
 * Return: returns pointer to new mem or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_mem;
	unsigned int i, x;
	char *old_mem = ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_mem = malloc(new_size);

	if (new_mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	x = new_size;
	if (new_size > old_size)
		x = old_size;
	i = 0;
	while (i < x)
	{
		*(new_mem + i) = *(old_mem + i);
		i++;
	}

	free(ptr);
	return (new_mem);
}
