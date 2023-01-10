#include "main.h"

/**
 * cap_string - capitalizes the first letter of a word
 * @s: string to be capitalized
 *
 * Return: returns string to ptr
 */
char *cap_string(char *s)
{
	int i;
	int j;
	int rev[14] = {32, 9, 11, 10, 44, 46, 59, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (j < 14)
		{
			if (i == 0)
			{
				if (*(s + i) >= 97 && *(s + i) <= 122)
				{
					*(s + i) = (*(s + i) - 97) + 65;
				}
			}
			else if (*(s + i) - rev[j] == 0 && i != 0)
			{
				if (*(s + (i + 1)) >= 97 && *(s + (i + 1)) <= 122)
				{
					*(s + (i + 1)) = (*(s + (i + 1)) - 97) + 65;
				}
			}
			j++;
		}
		i++;
	}
	return (s);
}
