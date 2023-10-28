#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a list
 * @head: beginning of the list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (*head == NULL)
	{
		free(*head);
		return;
	}

	current_node = *head;
	while (current_node != NULL)
	{
		*head = (*head)->next;
		free(current_node);
		current_node = *head;
	}

}
