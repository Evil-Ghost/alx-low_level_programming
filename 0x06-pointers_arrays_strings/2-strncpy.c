#include "main.h"

/**
 * _strncpy - copies a string from src to dest defined by n
 * @dest: destination of src
 * @src: string to be copied to dest
 * @n: number of bytes of src to be copied
 *
 * Return: returns dest to function to _strncpy pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
				break;
		i++;
	}
	return (dest);
}
