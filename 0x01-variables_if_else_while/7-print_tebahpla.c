#include <stdio.h>
#include <string.h>

/**
  * main - prints lowercase alphabets
  * in reverse
  * Return: returns value 0
  */
int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
