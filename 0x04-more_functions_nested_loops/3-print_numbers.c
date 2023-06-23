#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 */
void print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
