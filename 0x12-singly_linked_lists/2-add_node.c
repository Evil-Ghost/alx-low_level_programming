#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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
 * add_node - adds a new node to the beginning of a list
 * @head: head of the list
 * @str: string to add to the new node
 *
 * Return: address to new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *temp;
	char *str_dup = strdup(str);
	unsigned int len = _strlen(str);

	if (str == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);

	new_node->str = str_dup;
	new_node->len = len;
	/* new_node->next = *head; */
	/* head = new_node; */
	temp = *head;
	*head = new_node;
	new_node->next = temp;

	return (new_node);
}
