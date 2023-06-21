#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char n;

	i = 0;
	while (i < 10)
	{
		n = 97;
		while (n <= 122)
		{
			_putchar(n);
			n++;
		}
		_putchar(10);
		i++;
	}
}
