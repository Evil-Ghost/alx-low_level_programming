#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @l: number to be passed into function
 *
 * Return: passes last_digit to function
 */
int print_last_digit(int l)
{

	int last;

	if (l < 0)
	{
		last = (l * -1) % 10;
		_putchar(last + '0');
	}
	else
	{
		last = l % 10;
		_putchar(last + '0');
	}
	return (last);
}
