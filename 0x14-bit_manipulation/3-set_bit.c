#include "main.h"
#include <stdio.h>

/**
 *  set_bit-  sets the value of a bit to 1
 *  @n: number
 *  @index: index
 *  Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sb;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	sb = 1 << index;
	*n = *n | sb;
	return (1);
}
