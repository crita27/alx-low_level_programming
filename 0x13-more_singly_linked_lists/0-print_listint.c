#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * size_t print_listint - print all elements
 * @h: list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *m = h;
	size_t count = 0;

	while (m != NULL)
	{
		printf("%d\n", m->n);
		count++;
		m = m->n;
	}
	return (count);
}
