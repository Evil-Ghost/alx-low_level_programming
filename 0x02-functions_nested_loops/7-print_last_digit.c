#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number argument
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
		x *= -1;
	_putchar(x + '0');

	return (x % 10);
}
