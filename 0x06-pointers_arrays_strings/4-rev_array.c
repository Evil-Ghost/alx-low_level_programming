#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: size of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i, x, z;

	i = 0;
	x = n / 2;
	while (i < x)
	{
		z = *(a + i);
		*(a + i) = *(a + (n - 1));
		*(a + (n - 1)) = z;
		i++;
		n--;
	}
}
