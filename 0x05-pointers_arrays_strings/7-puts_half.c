#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string called by function
 *
 * Return: no return value(void)
 */
void puts_half(char *str)
{
	int i;
	int n;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	if (i % 2 != 0)
		n = (i - 1) / 2;
	else
		n = i / 2;

	n += 1;
	while (n < i)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
