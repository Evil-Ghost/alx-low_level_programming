#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: linked list argument
 *
 * Return: number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t count;


	if (h == NULL)
		return (0);

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
