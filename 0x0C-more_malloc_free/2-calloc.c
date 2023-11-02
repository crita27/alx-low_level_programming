#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocate memory
 * @nmemb: input
 * @size: size
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int totalSize;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	totalSize = nmemb * size;
	ptr = malloc(totalSize);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, totalSize);
	return (ptr);
}
