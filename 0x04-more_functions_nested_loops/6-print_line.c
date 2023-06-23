#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: integer argument to be expected
 *
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar(10);
}
