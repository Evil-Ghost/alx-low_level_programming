#include <stdio.h>
#include <string.h>

/**
  * main - prints lowercase alphabets from
  * a - z and a new line after
  * Return: the program returns 0 at the end
  */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
