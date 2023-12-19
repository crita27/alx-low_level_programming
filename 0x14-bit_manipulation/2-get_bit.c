#include "main.h"
#include <stdio.h>

/**
 * get_bit- return value
 * @n: number
 * @index: index
 * Return: always 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	long div, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	check = n & div;
	if (check == div)
		return (1);
	return (0);
}
