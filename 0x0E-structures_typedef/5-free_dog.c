#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees the memory allocation of dog_info
 * @d: dog_t structure passed into the function
 *
 */
void free_dog(dog_t *d)
{
	free(d);
}
