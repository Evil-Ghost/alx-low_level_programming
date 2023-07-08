#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector (one dimensional array)
 *
 * Return: returns 1 if one of the argv argument is not
 * a digit else returns 0(success)
 */
int main(int argc, char **argv)
{
	int i, j;
	int sum;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (!(argv[i][j] >= 48 && argv[i][j] <= 57))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(*(argv + i));
			i++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
