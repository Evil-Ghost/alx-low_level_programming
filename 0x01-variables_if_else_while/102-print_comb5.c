#include <stdio.h>

/**
 * main - prints all combination of two-digit
 * numbers such that the same combinations are
 * not printed e.g 00 10 and 01 00
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = i;
			l = j + 1;
			while (k < 10)
			{
				while (l < 10)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');

					if (!(i == 9 && j == 8 && k == 9 && l == 9))
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				l = 0;
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
