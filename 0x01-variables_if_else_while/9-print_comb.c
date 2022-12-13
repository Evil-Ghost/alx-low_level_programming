#include <stdio.h>
#include <string.h>

/**
  * main - prints all combination of single
  * numbers with comma and space in between
  * them
  * Return: returns value 0
  */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i % 10 + '0');

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
