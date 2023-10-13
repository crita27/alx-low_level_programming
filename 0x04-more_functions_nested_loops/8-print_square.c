#include "main.h"

/**
 * print_square - print square
 * @size: square side
 * Return: 0
 */

void print_square(int size)
{
int i;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
int j;
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
