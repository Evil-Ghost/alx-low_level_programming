#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms of the
 * fibonacci sequence whose value does not exceed 4,000,000
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b, sum, even_sum;
	
	a = 0;
	b = 1;
	sum = 0;
	even_sum = 0;
	do {
		sum = a + b;
		a = b;
		b = sum;
		if (sum % 2 == 0)
			even_sum += sum;
	} while (sum <= 4000000);
	printf("%d\n", even_sum);
	return (0);
}
