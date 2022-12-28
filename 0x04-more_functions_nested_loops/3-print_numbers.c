#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: returns nothing(void)
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
	_putchar('\n');
}
