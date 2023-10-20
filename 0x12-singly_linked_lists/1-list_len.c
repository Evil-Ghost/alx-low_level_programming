#include "lists.h"
#include <stdlib.h>

/**
 * list_len - length of the nodes in a list
 * @h: head of the list
 *
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t n;
	const list_t *current;

	current = h;
	n = 0;
	if (current == NULL)
		return (n);

	while (1)
	{
		n++;
		if (current->next == NULL)
			break;
		current = current->next;
	}

	return (n);
}
