#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Return: A;ways 0 (Success)
 */
int main(void)
{
int i, j, k;
for (i = '0'; i < '9'; i++)
{
for (j = i + 1; j <= '9'; j++)
{
for (k = j + 1; k <= '9'; k++)
{
if ((j != i) != k)
{
putchar(i);
putchar(j);
putchar(k);
if (i == '7' && i == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
