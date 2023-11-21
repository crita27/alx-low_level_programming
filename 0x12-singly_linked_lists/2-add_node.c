#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list
 * @str: pointer
 * @head: pointer pointer
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *a;
	unsigned int len = 0;

	while (str[len])
		len++;

	a = malloc(sizeof(list_t));
	if (!a)
		return (NULL);

	a->str = strdup(str);
	a->next = (*head);
	(*head) = a;
	a->len = len;
	return (*head);
}
