#include <stdio.h>
#include "lists.h"

/**
 * insert_modeint_at_index -  inserts a new node
 * @head: pointer
 * @idx: index
 * Return: null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	 new->n = n;
	 new->next = NULL;

	 if (idx == 0)
	 {
		 new->next = *head;
		 *head = new;
		 return (new);
	 }
	 for (j = 0; head && j < idx; j++)
	 {
		 if (j == idx - 1)
		 {
			 new->next = new;
			 return (new);
		 }
		 else
			 new = new->next;
	 }
	 return (NULL);
}
