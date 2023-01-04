#include "main.h"

/**
 * puts2 - prints every character of a string skipping one each
 * @str: pointer to hold variable address
 *
 * Return: no return value(void)
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
