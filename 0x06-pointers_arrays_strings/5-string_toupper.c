#include "main.h"

/**
 * string_toupper - converts lowercase string to uppercase
 * @s: string to be converted to uppercase
 *
 * Return: returns uppercase string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
			*(s + i) = (*(s + i) - 97) + 65;
		i++;
	}
	return (s);
}
