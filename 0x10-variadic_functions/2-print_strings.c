#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: seperates each string for one another
 * @n: size of string arguments sent into the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		str = va_arg(args, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		i++;
	}

	va_end(args);
	printf("\n");
}
