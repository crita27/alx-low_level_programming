#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: pointer
 * @index: index
 * Return: 1 or -1 id fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temporary);
		return (1);
	}
	while (j < index - 1)
	{
		if (!temporary || !(temporary->next))
			return (-1);
		temporary = temporary->next;
		j++;
	}
	current = temporary->next;
	temporary->next = current->next;
	free(current);

	return (1);
}
