#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of the memory to be allocated
 *
 * Return: returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(sizeof(*mem) * b);

	if (mem == NULL)
	{
		free(mem);
		exit(98);
	}

	return (malloc(b));
}
