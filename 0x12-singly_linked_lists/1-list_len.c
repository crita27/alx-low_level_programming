#include <stdlib.h>
#include "lists.h"

/**
 * list_lem - return number of eleements
 * @h: pointer
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}
	return (m);
}
