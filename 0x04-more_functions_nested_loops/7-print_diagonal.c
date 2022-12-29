#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times \ character should be printed
 *
 * Return: no return value(void)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		i = n;
		while (i >= 1)
		{
			j = i;
			while (j < n)
			{
				_putchar(' ');
				j++;
			}
			_putchar(92);
			_putchar('\n');
			i--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
