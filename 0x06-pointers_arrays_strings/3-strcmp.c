#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns value of s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	return (*(s1 + 5) - *(s2 + 5));
}
