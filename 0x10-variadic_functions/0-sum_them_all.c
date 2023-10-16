#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: size of the arguments
 *
 * Return: returns sum of all arguments otherwise return 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}

	va_end(args);
	return (sum);
}
