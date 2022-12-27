#include "main.h"

/**
 * print_times_table - prints times table of n if n
 * is greater than 0 but less than 15
 * @n: first argument
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					_putchar((i * j) + '0');
				}
				else if ((i * j > 9) && (i * j <= 99))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
				else if ((i * j) > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((((i * j) / 10) / 10) + '0');
					_putchar((((i * j) / 10) % 10) + '0');
					_putchar((i * j) % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((i * j) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
