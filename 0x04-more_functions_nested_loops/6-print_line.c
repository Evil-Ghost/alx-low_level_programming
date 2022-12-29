#include "main.h"

/**
 * print_line -prints the character "_" n times according to
 * the value of n
 * @n: number of time _ is to be printed
 *
 * Return: no return value(void)
 */
void print_line(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
