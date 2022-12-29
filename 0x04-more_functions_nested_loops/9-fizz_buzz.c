#include <stdio.h>

/**
 * main - prints the multiples of 3 and 5
 *
 * Description: prints Fizz if the number is a
 * multiple 3, print Buzz if the number is a multiple
 * of 5, prints FizzBuzz if the number is a multiple of
 * both 3 and 5 else print the number
 * Return: Always 0(success)
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
