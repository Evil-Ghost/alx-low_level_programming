#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number to be printed
 *
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n >= 15)
		return;

	i = 0;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			if (((i * j) >= 10) && ((i * j) <= 99))
				_putchar(((i * j) / 10) + '0');

			if (((i * j) >= 100) && ((i * j) <= 999))
			{
				_putchar(((i * j) / 100) + '0');
				_putchar((((i * j) / 10) % 10) + '0');
			}

			_putchar(((i * j) % 10) + '0');

			if (j != n)
				_putchar(',');

			if ((i * (j + 1) <= 999) && j != n)
				_putchar(' ');

			if ((i * (j + 1) <= 99) && j != n)
				_putchar(' ');

			if ((i * (j + 1) <= 9) && j != n)
				_putchar(' ');

			j++;
		}
		_putchar(10);
		i++;
	}
}
