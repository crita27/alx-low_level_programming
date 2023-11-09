#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function
 * @array: array
 * @size: size
 * @cmp: cmp
 * Return: always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
