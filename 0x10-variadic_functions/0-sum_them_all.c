#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum numbers
 * @n: number
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
    int sum = 0;
    unsigned int i;
    va_list args;
    va_start(args, n);

    if (n == 0)
	    return (0);
    for (i = 0; i < n; i++)
    {
        int val = va_arg(args, int);
        sum += val;
    }
    va_end(args);
    return (sum);
}
