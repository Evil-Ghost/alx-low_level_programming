#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string to be printed
 *
 * Return: no value returned(void)
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
