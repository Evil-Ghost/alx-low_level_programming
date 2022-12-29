#include "main.h"

/**
 * print_triangle - print number of triangle with the size given
 * @size: number of times # is to be printed on terminal
 *
 * Return: no return value(void)
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		i = size;
		while (i > 0)
		{
			j = i - 1;
			k = size - j;
			while (j > 0)
			{
				_putchar(' ');
				j--;
			}

			while (k > 0)
			{
				_putchar(35);
				k--;
			}
			_putchar('\n');
			i--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
