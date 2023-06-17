#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 122; n >= 97; n--)
		putchar(n);

	putchar('\n');

	return (0);
}
