#include <stdio.h>

/**
 * main - prints all different combination of
 * two digits except the ones that are considered
 * the same combination
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
