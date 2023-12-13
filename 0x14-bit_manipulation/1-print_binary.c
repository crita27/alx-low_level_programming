include <stdio.h>
#include "main.h"

/**
 * power - calculate power
 * @b: base
 * @p:power
 *
 * Return: always 0
 */
int power(unsigned int base, unsigned int power)
{       
        unsigned int n, i;
        
        n = 1;
        for (i = 1; i <= power; i++)
                n *= base;
        return (n);
}       
/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char f;

	f = 0;
	divisor = power(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			f = 1;
			putchar('1');
		}
		else if (f == 1 || divisor == 1)
		{
			putchar('0');
		}
		divisor >>= 1;
	}
}
