#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector (one dimensional array)
 *
 * Return: return 0(success) else return 1(fail)
 */
int main(int argc, char **argv)
{
	int i;
	int mul;

	mul = 1;
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = 1;
	while (i < argc)
	{
		mul *= atoi(*(argv + i));
		i++;
	}
	printf("%d\n", mul);

	return (0);
}
