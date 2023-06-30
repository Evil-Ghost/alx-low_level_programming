#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: first string
 * @s2: second string
 *
 * Return: returns the diference of the compared strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) - *(s2 + i) != 0)
			return (*(s1 + i) - *(s2 + i));
		i++;
	}

	return (*(s1 + i) - *(s2 + i));
}
