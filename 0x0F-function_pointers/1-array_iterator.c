#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator -  a function that executes a function given an array
 * @array: array of integers
 * @size: size of the array
 * @action: function to be called
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0)
		return;

	i = 0;
	while (i < size)
	{
		(*action)(*(array + i));
		i++;
	}
}
