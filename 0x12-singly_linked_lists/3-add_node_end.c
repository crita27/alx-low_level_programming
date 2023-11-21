#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer pointer
 * @str: pointer
 * Return: address of the new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temporary = *head;
	unsigned int count = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = NULL;
	new->len = count;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temporary->next)
		temporary = temporary->next;
	temporary->next = new;
	return (new);
}
