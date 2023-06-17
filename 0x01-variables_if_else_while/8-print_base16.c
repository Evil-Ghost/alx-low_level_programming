#include <stdio.h>

/**
 * main - prints all the numbers of base 16
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
		n++;
	}

	for (n = 97; n <= 102; n++)
		putchar(n);

	putchar('\n');

	return (0);
}
