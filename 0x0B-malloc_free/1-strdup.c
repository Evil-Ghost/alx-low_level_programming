#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string to a new memory location
 * @str: string argument
 *
 * Return: returns a pointer to new memory space or NULL if str = NULL
 */
char *_strdup(char *str)
{
	int i;
	char *dup_str;

	if (str == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
		;

	dup_str = malloc(sizeof(char) * (i + 1));

	if (dup_str == NULL)
		return (NULL);

	i = 0;
	while (1)
	{
		*(dup_str + i) = *(str + i);
		if (*(str + i) == '\0')
			break;
		i++;
	}

	return (dup_str);
}
