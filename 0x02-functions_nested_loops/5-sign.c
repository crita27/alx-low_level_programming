#include <stdio.h>
/**
 * print_sign- print the number sign
 *
 * @n: the number which will be check
 * Return: 0 for zero 1 for positive or -1 for negative numbers
 *
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (+1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
