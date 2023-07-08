#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0 on program end(success)
 */
int main(int argc, char **argv)
{
	int cents[] = {25, 10, 5, 2, 1};
	int i, x, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(*(argv + 1));
	change = 0;
	if (x < 0)
	{
		printf("%d\n", change);
		return (0);
	}

	while (x)
	{
		i = 0;
		while (i < 5)
		{
			if (x - cents[i] >= 0)
			{
				x -= cents[i];
				change += 1;
				break;
			}
			i++;
		}
	}
	printf("%d\n", change);
	return (0);
}
