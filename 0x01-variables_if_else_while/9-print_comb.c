#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 (Success)
 */
int main(void)
{
int m;

for (m = 0 ; m <= 10 ; m++)
{
putchar(m + '0');
if (m != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
