#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - a function that get the number of nodes in a list
 * @h: linked list argument
 *
 * Return: number of nodes printed
 */
size_t listint_len(const listint_t *h)
{
	size_t count;


	if (h == NULL)
		return (0);

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
