#include <stdio.h>
#include "lists.h"

/**
 * pop+list - deletes the head node
 * @head: pointer
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int N;

	if (!head || !*head)
		return (0);

	N = (*head)->n;
	temporary = (*head)->next;
	free(*head);
	*head = temporary;

	return (N);
}
