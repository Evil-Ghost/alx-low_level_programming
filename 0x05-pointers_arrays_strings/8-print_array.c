#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array argument
 * @n: number of elements to be printed
 *
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", *(a + i));

		if ((i + 1) != n)
			printf(", ");
		i++;
	}
	printf("\n");
}
