#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string argument
 *
 * Return: returns a pointer to the string - str
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 95 && *(str + i) <= 122)
			*(str + i) = (*(str + i) - 97) + 65;
		i++;
	}

	return (str);
}
