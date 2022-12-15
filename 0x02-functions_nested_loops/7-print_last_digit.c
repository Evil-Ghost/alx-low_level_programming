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
		ld = (l * -1) % 10;
		_putchar(ld);
	}
	else
	{
		ld = l % 10;
		_putchar(ld);
	}
	return (ld);
}
