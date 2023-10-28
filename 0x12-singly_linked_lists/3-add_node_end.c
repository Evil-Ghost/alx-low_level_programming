#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: string data to be stored
 *
 * Return: address to new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	while (current_node->next != NULL)
		current_node = current_node->next;

	current_node->next = new_node;
	return (new_node);
}
