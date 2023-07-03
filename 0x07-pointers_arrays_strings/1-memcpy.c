#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of the copied memory area
 * @src: memory area to be copied
 * @n: number of bytes to be copied
 *
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
