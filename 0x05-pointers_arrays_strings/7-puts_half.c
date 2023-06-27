#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: sting argument
 *
 */
void puts_half(char *str)
{
	int i, len;

	for (i = 0; *(str + i); i++)
		;

	if (i % 2 == 0)
	{
		len = i / 2;
	}
	else
	{
		len = (i - 1) / 2;
		len += 1;
	}

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar(10);
}
