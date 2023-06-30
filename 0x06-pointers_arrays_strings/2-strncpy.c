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
	int i;


	i = 0;
	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
	}
	for (;i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
