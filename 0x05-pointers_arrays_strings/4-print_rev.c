#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * @s: string passed in
 *
 * Return: no return value(void)
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
	{
		i++;
	}

	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
