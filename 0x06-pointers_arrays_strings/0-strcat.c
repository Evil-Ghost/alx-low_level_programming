#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: destination of string to be concatenated
 * @src: string to be concatenated
 *
 * Return: returns dest to the pointer *_strcat
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}

	j = 0;
	while (1)
	{
		if (*(src + j) == '\0')
			break;
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
