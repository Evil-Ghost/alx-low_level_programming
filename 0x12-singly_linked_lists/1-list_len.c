#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * list_len - a function that calculates the number of node in a list
 * @h: linked list argument
 *
 * Return: returns number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	i = 0;
	while (1)
	{
		h = h->next;
		i++;
		if (h == NULL)
			break;
	}

	return (i);
}
