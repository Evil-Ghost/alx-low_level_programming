#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int i, j, k, l;
	int x;

	i = 0;
	while (i <= 2)
	{
		x = 9;
		if (i == 2)
			x = 3;
		j = 0;
		while (j <= x)
		{
			k = 0;
			while (k <= 5)
			{
				l = 0;
				while (l <= 9)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(58);
					_putchar(k + '0');
					_putchar(l + '0');

					_putchar(10);
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
