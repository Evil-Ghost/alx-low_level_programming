#include <stdio.h>

/**
 * main - prints all combination of three digits
 * without the same possible combination
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
