#include <stdio.h>

/**
 * main - prints all the arguments the program receives plus
 * the first one
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always return 0(success)
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", *(argv + i));
		i++;
	}

	return (0);
}
