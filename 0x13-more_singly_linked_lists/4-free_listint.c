#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free lists
 * @head: pointer
 * Return: always 0
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}
