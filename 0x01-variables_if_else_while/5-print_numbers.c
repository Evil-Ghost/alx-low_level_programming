#include <stdio.h>

/**
 * main - prints all single digits of base 10 numbers starting
 * from 0
 *
 * Return: Alwasy 0 (Success)
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
	putchar('\n');

	return (0);
}
