#include "main.h"
/**
 * print_rev - reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int l = 0;
int i;

while (*s != '\0')
{
l++;
s++;
}
s--;
for (i = l; i > 0; i--)
{
putchar(*s);
s--;
}
putchar('\n');
}

