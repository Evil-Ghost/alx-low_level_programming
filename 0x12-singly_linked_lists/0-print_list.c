#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the element in a list
 * @h: head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t n;
	const list_t *current_node;

	current_node = h;

	n = 0;
	if (current_node == NULL)
		return (n);
	while (1)
	{
		if (current_node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current_node->len, current_node->str);

		n++;
		if (current_node->next == NULL)
			break;
		current_node = current_node->next;
	}

	return (n);
}
