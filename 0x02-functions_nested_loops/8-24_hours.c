#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	while (i <= 2)
	{
		j = 0;
		while (j < 10)
		{
			if (i == 2 && j < 4)
			{
				break;
			}
			k = 0;
			while (k < 6)
			{
				l = 0;
				while (l < 10)
				{
					_putchar(i % 10 + '0');
					_putchar(j % 10 + '0');
					_putchar(':');
					_putchar(k % 10 + '0');
					_putchar(l % 10 + '0');
					_putchar('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	_putchar('\n');
}
