#include "main.h"

/**
 * times_table - prints the 9 times
 * table starting with 0
 */
void times_table(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if ((i * j) > 9)
			{
				_putchar(((i * j) / 10) % 10 + '0');
				_putchar(((i * j) % 10) + '0');
			}
			else
			{
				_putchar(i * j + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				if ((i * (j + 1)) > 9)
				{
					_putchar(' ');
				}
				else
				{
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
