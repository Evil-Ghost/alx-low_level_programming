#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width size of the array
 * @height: height of the array
 *
 * Return: return NULL on failure else return a pointer to the new mem
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **new_arr;

	if (width == 0 || height == 0)
		return (NULL);

	new_arr = malloc(sizeof(int) * height);

	if (new_arr == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		*(new_arr + i) = malloc(sizeof(int) * width);
		i++;
	}

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			new_arr[i][j] = 0;
			j++;
		}
		i++;
	}

	return (new_arr);
}
