#include "mian.h"
/**
 * swap_int - swaps the values of two integers
 * @a: number to swap
 * @b: number to swap
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
