#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - calculate sum
 * @head: first node
 * RETURN: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
