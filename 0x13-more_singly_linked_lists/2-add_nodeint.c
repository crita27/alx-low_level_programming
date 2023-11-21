#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds new node
 * @head: pointer
 * @n: pointer
 * Return: null or pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
