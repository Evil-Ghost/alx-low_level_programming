#include <stdio.h>
#include <string.h>

/**
  * main - prints base 16 numbers in lowercase
  * Return: returns 0
  */
int main(void)
{
	int i;
	char c;

	c = 'a';

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
