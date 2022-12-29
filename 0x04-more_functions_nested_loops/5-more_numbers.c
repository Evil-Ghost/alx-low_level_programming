#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times on a new line
 *
 * Return: no return(void)
 */
void more_numbers(void)
{
	int i, j;

	i = 48;
	while (i < 58)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
			{
				_putchar(1 + '0');
			}
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
