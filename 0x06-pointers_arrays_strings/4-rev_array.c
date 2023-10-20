#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: input
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
int first = 0;
int last = n - 1;
		  
while (first < last)
{
int t = a[first];
a[first] = a[last];
a[last] = t;
first++;
last--;
}
}
