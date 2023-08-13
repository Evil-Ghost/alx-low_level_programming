#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string argument
 * @s2: second string argumet
 * @n: number of bytes to be copied from s2
 *
 * Return: returns pointer to new mem or NULL on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *new_mem;
	char *str1 = s1;
	char *str2 = s2;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";

	for (i = 0; *(str1 + i) != '\0'; i++)
		;
	for (j = 0; *(str2 + j) != '\0'; j++)
		;

	if (n >= j)
		n = j;
	n = (i + n);
	new_mem = malloc(sizeof(char) * (n + 1));
	if (new_mem == NULL)
		return (NULL);

	i = 0;
	while (*(str1 + i) != '\0')
	{
		*(new_mem + i) = *(str1 + i);
		i++;
	}

	j = 0;
	while (i < n)
	{
		*(new_mem + i) = *(str2 + j);
		i++;
		j++;
	}
	*(new_mem + i) = '\0';

	return (new_mem);
}
