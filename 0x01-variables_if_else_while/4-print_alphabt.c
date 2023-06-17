#include <stdio.h>

/**
 * main - prints the alphabet on the console in lowercase except q
 * and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 97;
	while (n <= 122)
	{
		if (n != 101 && n != 113)
			putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
