#include <stdio.h>

/**
 * main - prints all single digit number of base 10 starting
 * from 0 without using char data type
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
