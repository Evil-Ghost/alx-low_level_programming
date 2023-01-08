#include "main.h"

/**
 * _strncat - concatenates two strings given the number of bytes n
 * @dest: destination of src string
 * @src: string to be concatenated to dest
 *
 * Return: return dest to the pointer *_strncat
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n)
	{
		if (*(src + j) == '\0')
			break;
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
