#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0(success)
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	int i, j;

	i = 0;
	if (argc > 1)
	{
		j = 1;
		while (j < argc)
		{
			i++;
			j++;
		}
	}
	printf("%d\n", i);


	return (0);
}
