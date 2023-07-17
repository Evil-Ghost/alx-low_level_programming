#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: string argument
 *
 */
void _puts_recursion(char *s)
{
	if (*(s) == '\0')
		_putchar(10);

	if (*(s) != '\0')
	{
		_putchar(*(s));
		_puts_recursion(s + 1);
	}
}
