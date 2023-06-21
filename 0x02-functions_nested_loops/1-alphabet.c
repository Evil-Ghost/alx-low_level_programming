#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 */
void print_alphabet(void)
{
	char n;

	n = 97;
	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar(10);
}
