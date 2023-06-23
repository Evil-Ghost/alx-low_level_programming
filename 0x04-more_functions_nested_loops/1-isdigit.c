#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: first argument
 *
 * Return: 1 if c is a digit otherwise return 0
 */
int _isdigit(int c)
{
	return ((c >= 48 && c <= 58) ? 1 : 0);
}
