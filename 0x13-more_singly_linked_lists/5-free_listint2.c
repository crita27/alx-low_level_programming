#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free
 * @head: pointer
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head == NULL)
		return;
	while (*head)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}
	*head = NULL;
}

