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
		int i;
		int j;

		i = 0;
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				if ((i * j > 9) && (i * j <= 99))
				{
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
				else if ((i * j) > 99)
				{
					_putchar((((i * j) / 10) / 10) + '0');
					_putchar((((i * j) / 10) % 10) + '0');
					_putchar((i * j) % 10 + '0');
				}
				else
				{
					_putchar((i * j) + '0');
				}

				if (j != n)
				{
					_putchar(',');
					if ((i * (j + 1)) > 99)
					{
						_putchar(' ');
					}
					else if (((i * (j + 1)) > 9) &&
					((i * (j + 1)) <= 99))
					{
						_putchar(' ');
						_putchar(' ');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				}
				j++;
			}
			_putchar('\n');
			i++;
		}

	}
}
