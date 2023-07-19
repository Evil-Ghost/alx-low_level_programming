#include <stdio.h>

/**
 * main - prints the name the executable file was compiled from
 *
 * Return: always return 0(success)
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
