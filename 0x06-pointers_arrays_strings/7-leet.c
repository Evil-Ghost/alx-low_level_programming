#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @str: string argument
 *
 * Return: returns a pointer to str
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
	char numbers[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	i = 0;
	while (*(str + i) != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (*(str + i) - letters[j] == 0)
				*(str + i) = numbers[j];
			j++;
		}
		i++;
	}

	return (str);
}
