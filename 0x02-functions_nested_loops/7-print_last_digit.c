#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @l: number to be passed into function
 *
 * Return: passes last_digit to function
 */
int print_last_digit(int l)
{
	int last_digit;

	last_digit = l % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
