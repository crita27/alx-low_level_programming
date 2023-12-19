#include "main.h"
#include <stdio.h>

/**
 * flip_bits- returns the number of bits
 * @n: number
 * @m: number
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, numbit = 0;
	long int first;
	long int exclus = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		first = exclus >> i;
		if (first & 1)
			numbit++;
	}
	return (numbit);
}
