#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 * @head: head of a node
 * @n: integer argument
 *
 * Return: address to new node or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
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
