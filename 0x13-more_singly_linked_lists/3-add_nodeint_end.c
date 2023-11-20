#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node
 * @head: pointer
 * @n: new
 * Return: pointer or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t*new;
	listint_t*temporary = *head;

	new = malloc(sizeof(listint_t));
	if(!new)
		return(NULL);
	new->n=n;
	new->ne=NULL;
	if(*head == NULL)
	{
		*head=new;
		return(new);
	}
	while(temporary->ne)
		temporary=temporary->ne;
	temporary->ne=new;
}
