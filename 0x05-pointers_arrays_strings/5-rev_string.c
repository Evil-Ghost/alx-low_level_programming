#include "main.h"

/**
 * rev_string - reverse a string and change the stored value
 * @s: string passed into function
 *
 * Return: no return value(void)
 */
void rev_string(char *s)
{
	int i, j, k;
	char a[999];

	i = 0;
	while (*(s + i) != '\0')
	{
		*(a + i) = *(s + i);
		i++;
	}
	*(a + i) = '\0';
	j = 0;
	i -= 1;
	k = i;
	while (j <= k)
	{
		*(s + j) = *(a + i);
		i--;
		j++;
	}
}
