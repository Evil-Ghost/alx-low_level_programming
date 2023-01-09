#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns value of s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (1)
	{
		if (*(s1 + i) - *(s2 + i) != 0)
		{
			return (*(s1 + i) - *(s2 + i));
			break;
		}
		else if (*(s1 + i) == '0')
		{
			return (0);
			break;
		}
		i++;
	}
}
