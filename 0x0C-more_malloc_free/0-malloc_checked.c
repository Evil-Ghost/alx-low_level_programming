#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of the memory to be allocated
 *
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		exit (98);

	return (malloc(b));
}
