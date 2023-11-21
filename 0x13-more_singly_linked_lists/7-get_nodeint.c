#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return node
 * @head: pointer
 * @index: index
 * Return: head node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temporary = head;

	while (temporary && j < index)
	{
		temporary = temporary->next;
		j++;
	}
	return (temporary ? temporary : NULL);
}
