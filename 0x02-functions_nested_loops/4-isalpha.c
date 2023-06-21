#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character argument to be checked
 *
 * Return: 1 if c is a letter and 0 if other
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);
}
