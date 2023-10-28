#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a list
 * @head: head node of the list
 *
 */
void free_list(list_t *head)
{
	list_t *store_node;

	if (head == NULL)
		return;

	store_node = head;
	while (store_node != NULL)
	{
		head = head->next;
		free(store_node->str);
		free(store_node);
		store_node = head;
	}
}
