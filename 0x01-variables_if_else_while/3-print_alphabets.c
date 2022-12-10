#include <stdio.h>
#include <string.h>

/**
  * main - prints lowercase and uppercase
  * characters followed by a new line
  * Return: returns 0
  */
int main(void)
{
	char c;
	char C;

	c = 'a';
	C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}

	putchar('\n');
	return (0);
}
