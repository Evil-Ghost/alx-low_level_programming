#include "main.h"
#include <unistd.h>

/**
 * _strchr - locates a character in a string
 * @s: string argument
 * @c: character to be located
 *
 * Return: returns a pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) - c == 0)
			return ((s + i));
		i++;
	}

	return (NULL);
}
