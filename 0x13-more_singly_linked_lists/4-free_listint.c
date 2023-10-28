#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - a function that frees a list
 * @head: beginning of the list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	if (head == NULL)
		return;

	current_node = head;
	while (current_node != NULL)
	{
		head = head->next;
		free(current_node);
		current_node = head;
	}
}
