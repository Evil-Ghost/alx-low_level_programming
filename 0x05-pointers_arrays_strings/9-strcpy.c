#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination of copied string
 * @src: string source
 *
 * Return: returns pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (1)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
		{
			break;
		}
		i++;
	}
	return (dest);
}
