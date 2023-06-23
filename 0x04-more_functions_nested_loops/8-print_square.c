#include "main.h"

/**
 * print_square - prints a square
 * @size: integer - size of the square
 *
 */
void print_square(int size)
{
	int i, j;

	i = 0;
	while (i == 0 || i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar(35);
			j++;
		}
		_putchar(10);
		i++;
	}
}
