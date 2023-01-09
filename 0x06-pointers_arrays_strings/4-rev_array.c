#include "main.h"
#include  <stdio.h>

/**
 * reverse_array - reverses an array according to number of n
 * @r: pointer to the array
 * @n: number of elements to be reversed
 *
 * Return: no return value(void)
 */
void reverse_array(int *a, int n)
{
	int b[999];
	int i, j;

	i = 0;
	while (i < n)
	{
		*(b + i) = *(a + i);
		i++;

	}


	i -= 1;
	j = 0;
	while (j < n)
	{
		*(a + j) = *(b + i);
		j++;
		i--;
	}
}
