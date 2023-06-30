#include "main.h"

/**
 * _strncpy - copies a string to another using bytes from n
 * @dest: destination of the src
 * @src: source to be copied to dest
 * @n: bytes of src to be copied to dest
 *
 * Return: returns a pointer to the copie string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;


	i = 0;
	j = 0;
	while (j < n && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (*(src + j) == '\0')
		*(dest + i) = '\0';

	return (dest);
}
