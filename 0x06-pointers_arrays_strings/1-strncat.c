#include "main.h"

/**
 * _strncat - conctenates two string using bytes from n
 * @dest: destination of the src
 * @src: source to be concatenated to dest
 * @n: bytes of src to be concatenated to dest
 *
 * Return: returns a pointer to the concatenated string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;

	j = 0;
	while (j < n && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
