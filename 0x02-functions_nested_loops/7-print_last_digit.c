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

	last = l % 10;
	if (l < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
