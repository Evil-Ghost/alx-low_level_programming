#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string passed into function
 *
 * Return: returns new string to pointer
 */
char *leet(char *s)
{
	int i;
	int j;
	int let[10] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
	int num[10] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (*(s + i) - let[j] == 0)
				*(s + i) = num[j];
			j++;
		}
		i++;
	}
	return (s);
}
