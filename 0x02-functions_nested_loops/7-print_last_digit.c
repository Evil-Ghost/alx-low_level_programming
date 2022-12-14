#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @l: number to be passed into function
 *
 * Return: passes last_digit to function
 */
int print_last_digit(int l)
{

	int ld;
	if (l < 0)
	{
		_putchar(((l % 10) * -1) + '0');
		ld =_putchar(((l % 10) * -1) + '0');
	}
	else
	{
		_putchar(l % 10 + '0');
		ld = _putchar(l % 10 + '0');
	}
	return (ld);
}
