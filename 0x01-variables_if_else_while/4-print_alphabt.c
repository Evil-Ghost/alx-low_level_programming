#include <stdio.h>
#include <string.h>

/**
  * main - Prints lowercase alphabet
  * except 'e' and 'q'
  * Return: returns 0
  */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c++;
			continue;
		}
		
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
