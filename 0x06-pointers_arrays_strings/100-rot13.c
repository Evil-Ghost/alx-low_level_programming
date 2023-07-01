#include "main.h"

/**
 * rot13 - encodes alphabets using rot13 encryption
 * @str: string argumet to be passed into the function
 *
 * Return: returns str - string argument
 */
char *rot13(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 65 && *(str + i) <= 77) ||
				(*(str + i) >= 97 && *(str + i) <= 109))
		{
			*(str + i) += 13;
		}
		else if ((*(str + i) >= 78 && *(str + i) <= 90) ||
				(*(str + i) >= 110 && *(str + i) <= 122))
		{
			*(str + i) -= 13;
		}
		i++;
	}

	return (str);
}
