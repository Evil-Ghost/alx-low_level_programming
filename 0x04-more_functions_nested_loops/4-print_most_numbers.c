#include "main.h"

/**
 * print_most_numbers - prints digits from 0 to 9 except 2 and 4
 *
 * Return: returns nothing(void)
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		if (i != 50 || i != 52)
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
