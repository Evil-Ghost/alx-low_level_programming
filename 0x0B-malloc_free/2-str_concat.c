#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string argument
 * @s2: second string argument
 *
 * Return: returns a pointer to new mem location or NULL on fail
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (; *(s2 + i) != '\0'; i++)
		;

	new_str = malloc(sizeof(char) * (i + 1));

	if (new_str == NULL)
		return (NULL);

	i = 0;
	while (*(s1 + i) != '\0')
	{
		*(new_str + i) = *(s1 + i);
		i++;
	}

	j = 0;
	while (*(s2 + j) != '\0')
	{
		*(new_str + i) = *(s2 + j);
		i++;
		j++;
	}
	*(new_str + i) = '\0';

	return (new_str);
}
