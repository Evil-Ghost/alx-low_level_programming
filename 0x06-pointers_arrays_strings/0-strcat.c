#include "main.h"

/**
 * _strcat - conctenates two string
 * @dest: destination of the src
 * @src: source to be concatenated to dest
 *
 * Return: returns a pointer to the concatenated string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;

	j = 0;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
