#include <stdlib.h>
#include "main.h"

/**
 * _calloc - an imitation of the calloc function using malloc
 * @nmemb: number of memory to be allocated
 * @size: size of the memory normally sizeof(data type)
 *
 * Return: returns NULLL if arg is 0 or fails otherwise return mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new_mem = malloc(nmemb * size);

	if (new_mem == NULL)
		return (NULL);

	i = 0;
	while (i < (nmemb * size))
	{
		*(new_mem + i) = 48;
		i++;
	}

	return (new_mem);
}
