#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string argument to be printed
 *
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		;

	i -= 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar(10);
}
