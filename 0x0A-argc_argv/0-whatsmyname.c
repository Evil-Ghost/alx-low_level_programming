#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc:  argument count
 * @argv:  argument vector (one dimensional array)
 *
 * Return: returns 0(success)
 */
int main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
