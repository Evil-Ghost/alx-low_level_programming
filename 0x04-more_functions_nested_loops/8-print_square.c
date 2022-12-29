#include "main.h"

/**
 * print_square - prints a square based on the size given
 * @size: number of # to be printed
 *
 * Return: returns no value(void)
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = size;
		while (i > 0)
		{
			j = size;
			while (j > 0)
			{
				_putchar(35);
				j--;
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
