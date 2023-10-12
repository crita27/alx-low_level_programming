#include "main.h"
/**
 * print_times_table- prints the time table
 * @n: the time table value
 */
void print_times_table(int n)
{
int i, m, p;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
_putchar(',');
_putchar(' ');
p = i * m;
if (p <= 99)
_putchar(' ');
if (p <= 9)
_putchar(' ');
if (p >= 100)
{
_putchar((p / 100) + '0');
_putchar(((p / 10)) % 10 + '0');
}
else if (p <= 99 && p >= 10)
{
_putchar((p / 10) + '0');
}
_putchar((p % 10) + '0');
}
_putchar('\n');
}
}
