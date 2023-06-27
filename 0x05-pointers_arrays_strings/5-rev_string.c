#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string argument to be reversed
 *
 */
void rev_string(char *s)
{
	char x;
	int i, j, len;

	for (i = 0; *(s + i) != '\0'; i++)
		;

	i -= 1;
	len = i / 2;

	j = 0;
	while (j <= len)
	{
		x = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = x;
		i--;
		j++;
	}
}
