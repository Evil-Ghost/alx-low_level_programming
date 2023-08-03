#include "main.h"

/**
 * multiplier - multiplies i * i to where i < n
 * @n: number to be checked
 * @i: multiplier argument
 *
 * Return: returns the result of i * i
 */
int multiplier(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i == n)
		return (-1);

	return (multiplier(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer argument
 *
 * Return: returns the square root of a number otherwise return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);

	return (multiplier(n, 1));
}
