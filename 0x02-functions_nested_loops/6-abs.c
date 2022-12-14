#include "main.h"

/**
 * _abs - computes the absolute value
 * of an integer
 * @n: argument to be computed
 *
 * Return: result of the expression
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
