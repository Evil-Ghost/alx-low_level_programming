#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 digits excluding 2 and 4
 *
 * Return: no return(void)
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
	_putchar('\n');
}

