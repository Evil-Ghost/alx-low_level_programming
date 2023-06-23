#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 without 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		if (i != 50 && i != 52)
			_putchar(i);
		i++;
	}
	_putchar(10);
}
