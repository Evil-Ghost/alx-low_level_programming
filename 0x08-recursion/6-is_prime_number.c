#include "main.h"

/**
 * divide_number - checks if n is a prime number by division
 * @m: integer from is_prime_number
 * @x: counter
 *
 * Return: returns 1 if it's a prime number otherwise return 0
 */
int divide_number(int m, int x)
{
	if (x == m)
		return (1);

	if (m % x == 0)
		return (0);

	return (divide_number(m, x + 1));
}

/**
 * is_prime_number - function that checks if a number is a prime number
 * @n: integer argument
 *
 * Return: returns 1 if it's a prime number otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (divide_number(n, 2));
}
