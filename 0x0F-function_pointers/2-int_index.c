#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: function pointer to the function
 *
 * Return: returns the index of the element otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	i = 0;
	while (i < size)
	{
		if ((cmp(*(array + i))) != 0)
			return (i);
		i++;
	}

	return (-1);
}
