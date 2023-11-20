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
	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
}
