#include <stdio.h>

/**
 * main - prints the alphabet on the console in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 97; n <= 122; n++)
		putchar(n);

	for (n = 65; n <= 90; n++)
		putchar(n);

	putchar('\n');

	return (0);
}
