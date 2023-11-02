#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory
 * @ptr: pointer to the memory 
 * @old_size:  old size 
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	return (new_ptr);
	}
	if (new_size == old_size)
		return ptr;
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	memcpy(new_ptr, ptr, (old_size < new_size ? old_size : new_size));
	free(ptr);
	return new_ptr;
}
