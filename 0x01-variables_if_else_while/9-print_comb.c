#include <stdio.h>

/**
 * main - prints all possible combination of single digit numbers
 * seperate by each by ','
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 48;
	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
