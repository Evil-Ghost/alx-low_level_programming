#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function to peform arithmetic operations
 * @argc: argument count
 * @argv: arguemtn vector
 *
 * Return: returns 0(success) otherwise 98, 99, 100 on error
 */
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (*argv[2] != "+" || *argv[2] != "-" || *argv[2] != "*" ||
			*argv[2] != "/" || *argv[2] "%")
	{
		printf("Error\n");
		return (99);
	}

	if (*argv[2] == "/" && *argv[3] == 0 ||
			argv[2] == "%" && *argv[3] == 0)
	{
		printf("Error\n");
		return (100);
	}

	num1 = atoi(*argv[1]);
	num2 = atoi(*argv[3]);

	int operation(int, int) = get_op_func(*argv[2]);

	result = operation(num, num2);
	printf("%d", result);

	return (0);
}
