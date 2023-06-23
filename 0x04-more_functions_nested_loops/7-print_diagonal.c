#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: argument of integer to be expected
 *
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (i == 0 || i < n)
	{
		j = 1;
		while (j <= i)
		{
			_putchar(32);
			j++;
		}
		if (i >= 0 && !(n <= 0))
			_putchar(92);

		_putchar(10);
		i++;
	}
}
