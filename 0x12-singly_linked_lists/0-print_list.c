#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: linked list argument
 *
 * Return: returns number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	i = 0;
	while (1)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		i++;
		if (h == NULL)
			break;
	}

	return (i);
}
