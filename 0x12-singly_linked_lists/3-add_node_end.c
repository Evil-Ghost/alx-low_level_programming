#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - finds the length of a string
 * @s: string to find the length of
 *
 * Return: length of string otherwise return NULL if string
 * is NULL
 */
unsigned int _strlen(const char *s)
{
	unsigned int i;

	if (s == NULL)
		return (0);

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * add_node_end - adds elements to the end of a list
 * @head: head of the list
 * @str: string argument
 *
 * Return: returns the address of the new element or NULL
 * if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = _strlen(str);
	char *string = strdup(str);
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->str = string;
	new_node->len = len;

	if (current == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (1)
	{
		if (current->next == NULL)
		{
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
	}

}
