#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string argument
 * @b: bytes to fill the memory with
 * @n: number of memory to fill
 *
 * Return: returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
