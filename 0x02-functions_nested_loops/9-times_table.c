#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (i * j <= 9)
			{
				_putchar((i * j) + '0');
			}
			else
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}

			if ((i * (j + 1) <= 9) && j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((i * (j + 1) >= 10) && j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		i++;
		_putchar(10);
	}
}
