#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: character to be checked
 *
 * Return: returns 1 is c is a digit otherwise returns 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
