#include <stdio.h>

/**
  * main - Prints out the size of data
  * tyes in both 32 and 64 bits computer
  * Return: It returns a value of 0 which
  * ends the program
  */
int main(void)
{
	int intType;
	char charType;
	long int long_intType;
	long long int lolo_intType;
	float floatType;

	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long_intType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lolo_intType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType));

	return (0);
}
