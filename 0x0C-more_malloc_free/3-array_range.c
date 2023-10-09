#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: minimum number
 * @max: maximum number
 *
 * Return: return pointer to new array, NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(((max - min) + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		*(arr + i) = min;
		i++;
		min++;
	}

	return (arr);
}
