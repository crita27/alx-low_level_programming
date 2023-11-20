#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all elements
 * @h: list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 1;

	while(h == NULL)
		return(0);
	printf("%d\n", h->n);
	count += print_listint(h->next);
	return(count);
}
