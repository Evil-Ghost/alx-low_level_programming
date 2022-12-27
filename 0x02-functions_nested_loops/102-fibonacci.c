#include <stdio.h>

/**
 * main - prints the first fibonacci numbers
 *
 * Return: Always 0(success)
 */
int main(void)
{
	long i, a, b, sum;

	i = 1;
	a = 0;
	b = 1;
	sum = 0;
	while (i <= 50)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf("%ld", sum);
		if (i != 50)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
