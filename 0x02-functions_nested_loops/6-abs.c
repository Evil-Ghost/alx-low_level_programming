#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer argument passed into the function
 *
 * Return: returns the absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);

	return (n);
}
